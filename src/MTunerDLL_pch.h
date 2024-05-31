//--------------------------------------------------------------------------//
/// Copyright 2024 Milos Tosic. All Rights Reserved       .                ///
/// License: http://www.opensource.org/licenses/BSD-2-Clause               ///
//--------------------------------------------------------------------------//

#ifndef RTM_MTUNERDLL_PCH_H
#define RTM_MTUNERDLL_PCH_H

#include <rbase/inc/platform.h>
#include <rmem/inc/rmem.h>
#include <rmem/inc/rmem_entry.h>

#if RTM_PLATFORM_WINDOWS
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif // RTM_PLATFORM_WINDOWS

#endif // RTM_MTUNERDLL_PCH_H
