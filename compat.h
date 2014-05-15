#ifndef __COMPAT_H__
#define __COMPAT_H__

#ifdef WIN32

#include <windows.h>

inline void sleep10(int secs)
{
	Sleep(secs * 1000);
}

enum {
	PRIO_PROCESS		= 0,
};

inline int setpriority(int which, int who, int prio)
{
	return -!SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_IDLE);
}

#endif /* WIN32 */

inline void sleep10(int secs)
{
        sleep(secs);
}


#endif /* __COMPAT_H__ */
