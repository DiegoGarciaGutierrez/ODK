/* 
 * This file is AUTO GENERATED - DO NOT MODIFY this file. 
 * This file contains the data types of ODK 1500S.
 *
 * File created by ODK_CodeGenerator version 200.0.3002.1 
 * at mié octubre 23 17:41:00 2019 
 */

#if !defined ODK_Types_H
#define ODK_Types_H

#define  ODK_SUCCESS         0x0000
#define  ODK_USER_ERROR_BASE 0xF000

#define  ODK_TRUE            1
#define  ODK_FALSE           0

typedef  double              ODK_DOUBLE;
typedef  float               ODK_FLOAT;
typedef  long long           ODK_INT64;
typedef  long                ODK_INT32;
typedef  short               ODK_INT16;
typedef  char                ODK_INT8;
typedef  unsigned long long  ODK_UINT64;
typedef  unsigned long       ODK_UINT32;
typedef  unsigned short      ODK_UINT16;
typedef  unsigned char       ODK_UINT8;
typedef  unsigned long long  ODK_LWORD;
typedef  unsigned long       ODK_DWORD;
typedef  unsigned short      ODK_WORD;
typedef  unsigned char       ODK_BYTE;
typedef  unsigned char       ODK_BOOL;
typedef  unsigned long long  ODK_LTIME;
typedef  unsigned long       ODK_TIME;
typedef  unsigned long long  ODK_LDT;
typedef  unsigned long long  ODK_LTOD;
typedef  unsigned long       ODK_TOD;
typedef  unsigned char       ODK_S7STRING;
typedef  unsigned short      ODK_S7WSTRING;
typedef  wchar_t             ODK_WCHAR;
typedef  char                ODK_CHAR;
typedef  unsigned short      ODK_RESULT;

#pragma pack(push,1)
typedef struct ODK_DTL_s
{
  ODK_UINT16      Year;
  ODK_UINT8       Month;
  ODK_UINT8       Day;
  ODK_UINT8       Weekday;
  ODK_UINT8       Hour;
  ODK_UINT8       Minute;
  ODK_UINT8       Second;
  ODK_UINT32      Nanosecond;
} ODK_DTL;

// CLASSIC_DB
typedef struct ODK_CLASSIC_DB_s
{
  ODK_UINT32    Len;
  ODK_UINT8     Data[1];
} ODK_CLASSIC_DB;
#pragma pack(pop)

#endif // ODK_Types_H