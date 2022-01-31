#include <iostream>
#include <windows.h>
#include "Menu.h"

using namespace std;

int choice;

void menu()
{
	cout << "1. Actions" << endl;
	cout << "2. How to use" << endl;
	cout << "3. Credits" << endl;

	move();
}

void goBack()
{
	string choice;
	cout << "Do you want to return to the start menu?" << endl;
	cout << "Yes/No" << endl;
	cin >> choice;

	if (choice == "yes" or choice == "Yes")
	{
		system("CLS");
		menu();
	}
	else if (choice == "No" or choice == "no")
	{
		cout << "You go there anyway!" << endl;
		Sleep(1000);
		system("CLS");
		menu();
	}
	else
	{
		string save;
		for (bool i = 1; i;)
		{
			system("CLS");
			cout << "Incorrect input" << endl;
			cout << "Do you want to return to the start menu?" << endl;
			cout << "Yes/No" << endl;
			cin >> choice;
			if (choice == "yes" or choice == "Yes")
			{
				menu();
			}
			else if (choice == "No" or choice == "no")
			{
				save = choice;
				if (save == "No" or save == "no") cout << "You go there anyway!" << endl;
				Sleep(1000);
				system("CLS");
				menu();

			}
		}
	}
}

void actions()
{
	cout << "1. Add information" << endl;
	cout << "2. Search information" << endl;
	cout << "3. Delete information" << endl;
}

void howToUse()
{
	cout << "How to use" << endl;
}

void credits()
{
	cout << "Credits" << endl;
}

void move()
{
	cout << endl;
	cout << "Choose where do you want to go ";
	cin >> choice;

	if (choice == 1)
	{
		system("CLS");
		actions();
		goBack();
	}
	else if (choice == 2)
	{
		system("CLS");
		howToUse();
		goBack();
	}
	else if (choice == 3)
	{
		system("CLS");
		credits();
		goBack();
	}

}