#include <iostream>
#include "Menu.h"
#include "Actions.h"

using namespace std;

int main()
{
    HWND hWnd = GetConsoleWindow();
    ShowWindow(hWnd, SW_SHOWMAXIMIZED);
    options();
}