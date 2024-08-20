#define WIN32_LEAN_AND_MEAN 1
#include <windows.h>

int WINAPI
openside_win_main(HINSTANCE instance,
                  HINSTANCE prev_instance,
                  LPSTR cmd_line,
                  int cmd_show)
{
    MessageBoxA(0, "Hello world", "OpenSide", MB_OK);
    return 0;
}