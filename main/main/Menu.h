#pragma once

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#include <string>

void menu(int chooseOption);
void actions();
void actionsMenu(int counter);
void howToUse();
void credits();
void move();
void goBack();
void options();

void addInfo();
void deleteInfo();
void searchInfo();


#define KEY_UP 72
#define KEY_DOWN 80
#define _WIN32_WINNT  0x0500