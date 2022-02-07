#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#include "Menu.h"

using namespace std;

int choice;


int counter = 1;

void options()
{
	menu();
	cout << endl;
	cout << "Current selection " << counter << endl;
	char key;
	for (int i = 0;;)
	{
		key = _getch();

		if (key == KEY_UP && (counter >= 2 && counter <= 4))
		{
			system("CLS");
			menu();//menu
			counter--;
			cout << endl;
			cout << "Current selection " << counter << endl;
		}

		if (key == KEY_DOWN && (counter >= 1 && counter <= 3))
		{
			system("CLS");
			menu();//menu
			counter++;
			cout << endl;
			cout << "Current selection " << counter << endl;
		}

		if (key == '\r')
		{
			if (counter == 1)
			{
				system("CLS");
				actions();
				break;
			}

			else if (counter == 2)
			{
				counter = 1;
				system("CLS");
				howToUse();
				goBack();
				break;
			}

			else if (counter == 3)
			{
				counter = 1;
				system("CLS");
				credits();
				goBack();
				break;
			}

			else if (counter == 4)
			{
				counter = 1;
				system("CLS");
				cout << "Exited the program successfully." << endl;
				exit(0);
			}
		}
	}
}

void menu()
{
	cout << setw(150) << " ______           _____          _____________        _____       ____          ____        ____ \n";
	cout << setw(150) << "|......\\        /......|        |............/       |.....\\     |....|        |....|      |....|\n";
	cout << setw(150) << "|.......\\      /.......|        |....|               |......\\    |....|        |....|      |....|\n";
	cout << setw(150) << "|..| \\...\\    /.../ |..|        |....|______         |..|\\...\\   |....|        |....|      |....|\n";
	cout << setw(150) << "|..|  \\...\\  /.../  |..|        |........../         |..| \\...\\  |....|        |....|      |....|\n";
	cout << setw(150) << "|..|   \\...\\/.../   |..|        |....|               |..|  \\...\\ |....|        |....|      |....|\n";
	cout << setw(150) << "|..|    \\....../    |..|        |....|________       |..|   \\...\\|....|        |....|______|....|\n";
	cout << setw(152) << "|..|                |..|        |_____________/      |..|    \\........|        |________________|\n\n\n";
	cout << setw(107) << "1. Actions" << endl << endl;
	cout << setw(110) << "2. How to use" << endl << endl;
	cout << setw(107) << "3. Credits" << endl << endl;
	cout << setw(104) << "4. Exit" << endl << endl;
	cout << "You can navigate using the arrow keys" << endl;
}


void actions()
{
	actionsMenu();


	cout << endl;
	cout << "Current selection " << counter << endl;
	char key;
	for (int i = 0;;)
	{
		key = _getch();

		if (key == KEY_UP && (counter >= 2 && counter <= 4))
		{
			system("CLS");
			actionsMenu();
			counter--;
			cout << endl;
			cout << "Current selection " << counter << endl;
		}

		if (key == KEY_DOWN && (counter >= 1 && counter <= 3))
		{
			system("CLS");
			actionsMenu();
			counter++;
			cout << endl;
			cout << "Current selection " << counter << endl;
		}

		if (key == '\r')
		{
			if (counter == 1)
			{
				counter = 1;
				system("CLS");
				addInfo();
			}

			else if (counter == 2)
			{
				counter = 1;
				system("CLS");
				searchInfo();
			}

			else if (counter == 3)
			{
				counter = 1;
				system("CLS");
				deleteInfo();
			}

			else if (counter == 4)
			{
				counter = 1;
				system("CLS");
				options();
			}
		}
	}

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
		options();
	}
	else if (choice == "No" or choice == "no")
	{
		cout << "You go there anyway!" << endl;
		Sleep(1000);
		system("CLS");
		options();
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
				options();
			}
			else if (choice == "No" or choice == "no")
			{
				save = choice;
				if (save == "No" or save == "no") cout << "You go there anyway!" << endl;
				Sleep(1000);
				system("CLS");
				options();

			}
		}
	}
}

void actionsMenu()
{
	cout << "1. Add information" << endl;
	cout << "2. Search information" << endl;
	cout << "3. Delete information" << endl;
	cout << "4. Go back to the menu" << endl << endl;
	cout << "You can navigate using the arrow keys" << endl;
}


void addInfo()
{
	cout << "Add info" << endl;
	goBack();
}

void deleteInfo()
{
	cout << "Delete info" << endl;
	goBack();
}

void searchInfo()
{
	cout << "Search" << endl;
	goBack();
}

void howToUse()
{
	cout << "How to use" << endl;
	goBack();
}

void credits()
{
	cout << "Marieta Stoycheva - Scrum Trainer" << endl;
	cout << "Georgi Hrisimov - Front-End Developer" << endl;
	cout << "Egor Semenov - Back-End Developer" << endl;
	cout << "Yoan Tanev - QA" << endl << endl;
	goBack();
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
	else if (choice == 4)
	{

		system("CLS");
		cout << "Exited the program successfully." << endl;
		exit(0);
	}

	

}