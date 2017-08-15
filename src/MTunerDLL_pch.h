//--------------------------------------------------------------------------//
/// Copyright (c) 2017 by Milos Tosic. All Rights Reserved.                /// 
/// License: http://www.opensource.org/licenses/BSD-2-Clause               ///
//--------------------------------------------------------------------------//

#ifndef __RTM_MTUNERDLL_PCH_H__
#define __RTM_MTUNERDLL_PCH_H__

#include <rbase/inc/platform.h>
#include <rmem/inc/rmem.h>
#include <rmem/inc/rmem_entry.h>

#if RTM_PLATFORM_WINDOWS
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif // RTM_PLATFORM_WINDOWS

#endif // __RTM_MTUNERDLL_PCH_H__
