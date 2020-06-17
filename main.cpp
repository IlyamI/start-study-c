#include <Windows.h>
#include <WinUser.h>

#pragma comment(lib, "kernel32.lib")
#pragma comment(lib, "user32.lib")

/*
#include <myFunctions.cpp>
#include <myHeader.h>
*/

INT WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, INT nCmdShow)
{

    LPSTR message="Мое сообщение";
    LPSTR caption="Мой заголовок";

    int l=sizeof(message);
    
    MessageBoxA(0, message, caption, MB_OK);
    
    ExitProcess(NOERROR);

}
