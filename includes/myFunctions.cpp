#include <WinUser.h>

void myMessage()
{

    LPSTR message="Сообщение 1";
    LPSTR caption="Заголовок 1";

    int l=sizeof(message);
    
    MessageBoxA(0, message, caption, MB_OK);

//    return;
}