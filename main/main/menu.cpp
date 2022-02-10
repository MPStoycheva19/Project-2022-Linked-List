#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#include <string>
#include "Menu.h"
#include "data.h"

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
	cout << endl << endl;
	cout << setw(139) << "_____________________________________________________________\n";
	cout << setw(140) << "|                                                            |\n\n";
	cout << setw(140) << "|                                                            |\n\n";
	cout << setw(140) << "|                   What do you want to do?                  |\n\n";
	cout << setw(140) << "|                    1. Add information                      |\n\n";
	cout << setw(140) << "|                  2. Search information                     |\n\n";
	cout << setw(140) << "|                  3. Delete information                     |\n\n";
	cout << setw(140) << "|                  4. Go back to the menu                    |\n\n";
	cout << setw(140) << "|                                                            |\n\n";
	cout << setw(140) << "|____________________________________________________________|\n\n";

	cout << setw(125) << "You can navigate using the arrow keys\n\n";
}


void addInfo()
{
	Node* head = NULL;
	string input;
	cout << "                         Add info" << endl;
	cout << "        Please enter the information you want to add" << endl;
	getline(cin, input);
	push(&head, input);
	cout << endl << "Your information has been succesfully written" << endl;
	goBack();
}

void deleteInfo()
{
	Node* head = NULL;
	cout << "         Please select the information which you want to delete" << endl;
	printList(head);
	string info;
	/*deleteNode(&head, info);*/
	goBack();
}

void searchInfo()
{
	Node* head = NULL;
	cout << "               Search" << endl;
	cout << "      Please type the information you would like to search" << endl;
	string input;
	getline(cin, input);
	if (searchData(head, input) == "0") { cout << "There is no such information"; goBack(); }
	else {
		cout << endl << "Here are your search results: " << searchData(head, input);
		goBack();
	}
}

void howToUse()
{
	cout << setw(138) << " _____________________________________________________________" << endl;
	cout << setw(140) << "|                                                            |\n\n";
	cout << setw(140) << "|                                                            |\n\n";
	cout << setw(140) << "|                         How to use                         |\n\n";
	cout << setw(140) << "|                                                            |\n\n";
	cout << setw(140) << "|             1. You can add or delete information           |\n\n";
	cout << setw(140) << "|             as you want using the options                  |\n\n";
	cout << setw(140) << "|                                                            |\n\n";
	cout << setw(140) << "|             2. You can use the arrow keys to move          |\n\n";
	cout << setw(140) << "|                                                            |\n\n";
	cout << setw(140) << "|             3. You can search information                  |\n\n";
	cout << setw(140) << "|                                                            |\n\n";
	cout << setw(140) << "|              (the others later)                            |\n\n";
	cout << setw(140) << "|                                                            |\n\n";
	cout << setw(140) << "|____________________________________________________________|\n\n";
	goBack();
}

void credits()
{
	cout << "Credits" << endl;
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