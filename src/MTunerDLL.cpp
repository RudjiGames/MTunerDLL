//--------------------------------------------------------------------------//
/// Copyright (c) 2019 by Milos Tosic. All Rights Reserved.                ///
/// License: http://www.opensource.org/licenses/BSD-2-Clause               ///
//--------------------------------------------------------------------------//

#include <MTunerDLL_pch.h>

#if RTM_PLATFORM_WINDOWS


BOOL APIENTRY DllMain(HMODULE /*_hModule*/, DWORD  _ul_reason_for_call, LPVOID /*_lpReserved*/)
{
	int allocatorID = 0;

	char buffer[1024];
	DWORD res = GetEnvironmentVariableA("MTuner_Allocator", buffer, RTM_NUM_ELEMENTS(buffer));
	if ((res != 0) && (res < 1024))
	{
		buffer[res] = 0;
		allocatorID = atoi(buffer);
	}

	switch (_ul_reason_for_call)
	{
		case DLL_PROCESS_ATTACH:	rmemHookAllocs(0, allocatorID);
									break;

		case DLL_PROCESS_DETACH:	rmemUnhookAllocs();
									break;
	};
	return TRUE;
}

#endif // RTM_PLATFORM_WINDOWS
