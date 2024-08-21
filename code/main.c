#define WIN32_LEAN_AND_MEAN 1
#include <windows.h>

#include "base.h"

static void*
memory_alloc(uptr size)
{
    static HANDLE heap_handle;
    if (!heap_handle)
    {
        heap_handle = GetProcessHeap();
    }
    return HeapAlloc(heap_handle, HEAP_ZERO_MEMORY, size);
}

/* Game Structs */

/* Game Procs */
typedef u32 __fastcall fun_0084aa40_type(void* this, u32 unused, u32 a1);
static fun_0084aa40_type* fun_0084aa40 = (void*)0x0084aa40;

int WINAPI
openside_win_main(HINSTANCE instance,
                  HINSTANCE prev_instance,
                  LPSTR cmd_line,
                  int cmd_show)
{
    void* pvVar4 = memory_alloc(0x420);
    u32 test = fun_0084aa40(pvVar4, 0, 0);
    
    MessageBoxA(0, cmd_line, "OpenSide", MB_OK);
    return 0;
}