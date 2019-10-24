/*
 * This file is AUTO GENERATED - DO NOT MODIFY this file. 
 * This file contains the function prototypes of ODK 1500S.
 *
 * File created by ODK_CodeGenerator version 200.0.3002.1
 * at mié octubre 23 17:41:00 2019 
*/

#if !defined ODK_Functions_H
#define ODK_Functions_H

#include "ODK_Types.h"

#ifdef DLL_EXPORT
  #define EXPORT_API extern "C" __declspec(dllexport)
#else
  #define EXPORT_API extern "C"
#endif

// Basic function in order to show 
// how to create a function in ODK 1500S.
ODK_RESULT komunikatu (
  /*IN*/const ODK_INT16& lankarga,
  /*IN*/const ODK_S7STRING piezamota[256],
  /*INOUT*/ODK_BOOL& piezaonartua);
#define _ODK_FUNCTION_KOMUNIKATU  ODK_RESULT komunikatu (/*IN*/const ODK_INT16& lankarga, /*IN*/const ODK_S7STRING piezamota[256], /*INOUT*/ODK_BOOL& piezaonartua)

#endif