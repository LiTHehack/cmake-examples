#ifdef WINDOWS
#include <windows.h>
#else
#include <unistd.h>
#endif

inline void Sleep(int sleepMs) {
#ifdef LINUX
	// usleep takes sleep time in us (1 millionth of a second)
    usleep(sleepMs * 1000);
#endif
#ifdef WINDOWS
    Sleep(sleepMs);
#endif
}