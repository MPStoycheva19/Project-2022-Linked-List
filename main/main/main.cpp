#include <iostream>
#include "Menu.h"

using namespace std;

int main()
{
    HWND hWnd = GetConsoleWindow();
    ShowWindow(hWnd, SW_SHOWMAXIMIZED); //Open the console in full screen
    options();
}