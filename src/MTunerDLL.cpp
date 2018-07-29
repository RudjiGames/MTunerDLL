//--------------------------------------------------------------------------//
/// Copyright (c) 2018 by Milos Tosic. All Rights Reserved.                ///
/// License: http://www.opensource.org/licenses/BSD-2-Clause               ///
//--------------------------------------------------------------------------//

#include <MTunerDLL_pch.h>

#if RTM_PLATFORM_WINDOWS

BOOL APIENTRY DllMain(HMODULE /*_hModule*/, DWORD  _ul_reason_for_call, LPVOID /*_lpReserved*/)
{
	switch (_ul_reason_for_call)
	{
		case DLL_PROCESS_ATTACH:	rmemInit(0);		
									rmemHookAllocs(0);
									break;

		case DLL_PROCESS_DETACH:	rmemUnhookAllocs();
									rmemShutDown();
									break;
	};
	return TRUE;
}

#endif // RTM_PLATFORM_WINDOWS
