#include <WinUser.h>

void myMessage()
{

    LPSTR message="��������� 1";
    LPSTR caption="��������� 1";

    int l=sizeof(message);
    
    MessageBoxA(0, message, caption, MB_OK);

//    return;
}