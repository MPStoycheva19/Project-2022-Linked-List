#include <iostream>
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

	cout << "Choose where do you want to go" << endl;
	cin >> choice;

	if (choice == 1)
	{
		actions();
	}

}