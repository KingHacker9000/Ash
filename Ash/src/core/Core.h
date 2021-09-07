#pragma once

#ifdef AGE_PLATFORM_WINDOWS
	#ifdef AGE_BUILD_DLL
		#define ASH_API __declspec(dllexport)
	#else
		#define ASH_API __declspec(dllimport)
	#endif // AGE_API
#else
	#error age only supports Windows!

#endif // AGE_PLATFORM
