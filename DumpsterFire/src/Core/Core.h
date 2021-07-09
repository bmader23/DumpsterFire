#pragma once

#ifdef DF_PLATFORM_WINDOWS
	#ifdef DF_BUILD_DLL
		#define DF_API __declspec(dllexport)
	#else
		#define DF_API __declspec(dllimport)
	#endif // DF_BUILD_DLL
#else
#error DumpsterFire only supports windows.
#endif // DF_PLATFORM_WINDOWS