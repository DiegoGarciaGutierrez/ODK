#include "stdafx.h"
#include "ODK_Functions.h"
#include "tchar.h"
#include <iostream>
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <string.h>
#include "ODK_StringHelper.h"
#include <winsock2.h>
#pragma comment(lib, "Ws2_32.lib")
using namespace std;



EXPORT_API ODK_RESULT OnLoad(void)
{

	//Programa kargatzean exekutatuko den kodigoa

	return ODK_SUCCESS;
}


EXPORT_API ODK_RESULT OnUnload(void)
{
	//Programa deskargatzean exekutatuko den kodigoa
	return ODK_SUCCESS;
}


EXPORT_API ODK_RESULT OnRun(void)
{
	//Automata run pasatzerakoan exekutatuko den kodigoa
	return ODK_SUCCESS;
}


EXPORT_API ODK_RESULT OnStop(void)
{
	//Automata stop pasatzerakoan exekutatuko den kodigoa
	return ODK_SUCCESS;
}


ODK_RESULT komunikatu(const ODK_INT16& lankarga, const ODK_S7STRING piezamota[256], ODK_BOOL& piezaonartua)
{

	char karga[8] = "0";
	char pieza[256];

	WSADATA WSAData;
	SOCKET server, client;
	SOCKADDR_IN serverAddr, clientAddr;
	WSAStartup(MAKEWORD(2, 0), &WSAData);
	server = socket(AF_INET, SOCK_STREAM, 0);
	serverAddr.sin_addr.s_addr = INADDR_ANY;
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_port = htons(5555);

	//Socket zerbitzaria bilatu makina lokalean

	bind(server, (SOCKADDR *)&serverAddr, sizeof(serverAddr));
	listen(server, 0);
	cout << "Konexioak bilatzen..." << endl;
	char buffer[1024];
	char info[1024];
	int clientAddrSize = sizeof(clientAddr);

	if ((client = accept(server, (SOCKADDR *)&clientAddr, &clientAddrSize)) != INVALID_SOCKET)
	{

		cout << "Klientea kontektatu da" << endl;
		memset(buffer, '\0', 1024);
		recv(client, buffer, sizeof(buffer), 0);
		cout << "Eskamena: " << buffer << endl;
		if (strcmp(buffer, "ask") == 0)
		{

			itoa(lankarga, karga, 10); //Karga balorea char array-ra bihurtu
			cout << "karga balioa bidaltzen... " << karga << endl;
			strcat_s(karga, "\n");
			send(client, karga, strlen(karga), 0);
			memset(karga, '\0', 8);
			Convert_S7STRING_to_SZSTR(piezamota, pieza, 256); //Pieza mota char array-ra bihurtu
			cout << "pieza mota bidaltzen... " << pieza << endl;
			strcat_s(pieza, "\n");
			send(client, pieza, strlen(pieza), 0);
			memset(pieza, '\0', 256);
			memset(buffer, '\0', 1024);

		}

		if (strcmp(buffer, "switch") == 0)
		{
			//Makina prestatu pieza jasotzeko
			piezaonartua = TRUE;
			memset(buffer, '\0', 1024);

		}

		closesocket(client);
		cout << "Klientea deskonektatu da" << endl;
		return ODK_SUCCESS;

	}

}
