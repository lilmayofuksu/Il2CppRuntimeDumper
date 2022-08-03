
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "stdlib.h"
#include <stdio.h>
#include "il2cpp_dump.h"

void il2cppi_new_console() {
    AllocConsole();
    freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);
    freopen_s((FILE**)stderr, "CONOUT$", "w", stderr);
}

void il2cppi_close_console() {
    fclose(stdout);
    fclose(stderr);
    FreeConsole();
}

void Main(HMODULE hModule)
{
    il2cppi_new_console();
    il2cpp_dump(hModule, (char*)"./", "GameAssembly.dll");
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Main, new HMODULE(hModule), 0, NULL);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}



