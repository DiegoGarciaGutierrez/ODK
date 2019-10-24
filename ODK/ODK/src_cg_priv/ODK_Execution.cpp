/*
 * This file is AUTO GENERATED - DO NOT MODIFY this file. 
 * This file contains the execute function and trace helpers for ODK 1500S.
 *
 * File created by ODK_CodeGenerator version 200.0.3002.1
 * at mié octubre 23 17:41:00 2019
*/

#include "ODK_Functions.h"

#define ODK_COMMAND_NOT_IMPLEMENTED    0x8098 
ODK_UINT32 g_ODK1500sBuildVersion = (2 << 24) + (0 << 16) + (0 << 8) + 0;

// declaration of the callbacks for testing them in Execute()
EXPORT_API ODK_RESULT OnLoad (void);
EXPORT_API ODK_RESULT OnUnload (void);
EXPORT_API ODK_RESULT OnRun (void);
EXPORT_API ODK_RESULT OnStop (void);

//command enums
typedef enum CommandHash_e
{
  FCT_HASH_komunikatu = 0xC5C3724A
}CommandHash_t;

#pragma optimize( "", off )
//Execute()
EXPORT_API ODK_RESULT Execute (ODK_UINT32        cmd
                              ,const char* const in
                              ,const char*       inout
                              ,const char*       out)
{
  switch (cmd)
  {
    case FCT_HASH_komunikatu:
    {
      return komunikatu (*((ODK_INT16*) &(in[0])), (ODK_S7STRING*) &(in[2]), *((ODK_BOOL*) &(inout[0])));
    }
    default:
    {
      typedef ODK_RESULT (*t_CallbackFunction)(void);
      #pragma warning ( disable: 4189 )
      // check the existence of the callback functions
      // (but suppress warning of not used variables)
      {
        t_CallbackFunction tmp1 = &OnLoad;
        t_CallbackFunction tmp2 = &OnUnload;
        t_CallbackFunction tmp3 = &OnRun;
        t_CallbackFunction tmp4 = &OnStop;
      }
      return ODK_COMMAND_NOT_IMPLEMENTED;
    }
  }
}
#pragma optimize( "", on )


