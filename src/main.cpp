/*
*	This is an old mod
*	Licensed under WTFPLv2
            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                    Version 2, December 2004

 Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>

 Everyone is permitted to copy and distribute verbatim or modified
 copies of this license document, and changing it is allowed as long
 as the name is changed.

            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

  0. You just DO WHAT THE FUCK YOU WANT TO.

*/
#include <cstdio>
#include <windows.h>

extern "C" int WINAPI DllMain(HINSTANCE hinst, unsigned long reason,
                              void *lpReserved) {
    if (reason == DLL_PROCESS_ATTACH) {
        if (AllocConsole()) {
            freopen("conout$", "w", stdout);
            freopen("conout$", "w", stderr);
            freopen("conin$", "r", stdin);
            puts("GTA console show by Fabio\n");
        }
    }
    return TRUE;
}
