#include <windows.h>
#include <stdio.h>

int main()
{
    LoadLibraryA("MyDLL.dll");
    Sleep(2000);
    return(0);
}
