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
int countInfo = 0;

Node* head = NULL;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void menu(int chooseOption)
{
	cout << setw(150) << " ______           _____          _____________        _____       ____          ____        ____ \n";
	cout << setw(150) << "|......\\        /......|        |............/       |.....\\     |....|        |....|      |....|\n";
	cout << setw(150) << "|.......\\      /.......|        |....|               |......\\    |....|        |....|      |....|\n";
	cout << setw(150) << "|..| \\...\\    /.../ |..|        |....|______         |..|\\...\\   |....|        |....|      |....|\n";
	cout << setw(150) << "|..|  \\...\\  /.../  |..|        |........../         |..| \\...\\  |....|        |....|      |....|\n";
	cout << setw(150) << "|..|   \\...\\/.../   |..|        |....|               |..|  \\...\\ |....|        |....|      |....|\n";
	cout << setw(150) << "|..|    \\....../    |..|        |....|________       |..|   \\...\\|....|        |....|______|....|\n";
	cout << setw(152) << "|..|                |..|        |_____________/      |..|    \\........|        |________________|\n\n\n";

	if (chooseOption == 1)
	{	
		cout << setw(113) << "________________________________" << endl << endl;
		cout << setw(114) << "|                                 |" << endl << endl;
		cout << setw(81) << "| ";
		SetConsoleTextAttribute(h, 2);
		cout << "       ---> 1. Actions          ";
		SetConsoleTextAttribute(h, 7);
		cout<<"|" << endl << endl;

		cout << setw(114) << "|             2. How to use       |" << endl << endl;
		cout << setw(114) << "|             3. Credits          |" << endl << endl;
		cout << setw(114) << "|             4. Exit             |" << endl << endl;
		cout << setw(114) << "|_________________________________|" << endl << endl;
	}
	else if (chooseOption == 2)
	{
		cout << setw(113) << "_________________________________" << endl << endl;
		cout << setw(114) << "|                                 |" << endl << endl;
		cout << setw(114) << "|            1. Actions           |" << endl << endl;
		cout << setw(81) << "| ";
		SetConsoleTextAttribute(h, 2);
		cout << "       ---> 2. How to use       ";
		SetConsoleTextAttribute(h, 7);
		cout<<"| " << endl << endl;
		cout << setw(114) << "|            3. Credits           |" << endl << endl;
		cout << setw(114) << "|            4. Exit              |" << endl << endl;
		cout << setw(114) << "|_________________________________|" << endl << endl;
	}
	else if (chooseOption == 3)
	{
		cout << setw(113) << "_________________________________" << endl << endl;
		cout << setw(114) << "|                                 |" << endl << endl;
		cout << setw(114) << "|             1. Actions          |" << endl << endl;
		cout << setw(114) << "|             2. How to use       |" << endl << endl;
		cout << setw(80) << "|";
		SetConsoleTextAttribute(h, 2);
		cout << "       ---> 3. Credits           ";
		SetConsoleTextAttribute(h, 7);
			cout<<"| " << endl << endl;
		cout << setw(114) << "|             4. Exit             |" << endl << endl;
		cout << setw(114) << "|_________________________________|" << endl << endl;
	}
	else if (chooseOption == 4)
	{		
		cout << setw(113) << "_________________________________" << endl << endl;
		cout << setw(114) << "|                                 |" << endl << endl;
		cout << setw(114) << "|             1. Actions          |" << endl << endl;
		cout << setw(114) << "|             2. How to use       |" << endl << endl;
		cout << setw(114) << "|             3. Credits          |" << endl << endl;
		cout << setw(80) << "|";
		SetConsoleTextAttribute(h, 2);
		cout << "         ---> 4. Exit            ";
		SetConsoleTextAttribute(h, 7);
		cout<<"| " << endl << endl;
		cout << setw(114) << "|_________________________________|" << endl << endl;
	}

	cout << endl;
	cout << setw(116) << "You can navigate using the arrow keys" << endl;
	cout << setw(119) << "but for more information go to -How to use-" << endl;
}

void options()
{
	menu(counter);
	cout << endl;
	
	char key;
	for (int i = 0;;)
	{
		key = _getch();

		if (key == KEY_UP && (counter >= 2 && counter <= 4))
		{
			system("CLS");
			counter--;
			
			menu(counter);//menu
		}

		if (key == KEY_DOWN && (counter >= 1 && counter <= 3))
		{
			system("CLS");
			counter++;
			
			menu(counter);//menu
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

void actionsMenu(int counter)//function that displays all actions you can do
{
	
	cout << setw(156) << "       ______        __________     _____________       __________       _________        ____      ____ \n";
	cout << setw(156) << "    /......\\      |.........|    |............|      |..........|     |.........|      |....\\    |....|\n";
	cout << setw(156) << "   /.../\\...\\     |...|              |....|             |....|        |...| |...|      |.....\\   |....|\n";
	cout << setw(156) << "  /..........\\    |...|              |....|             |....|        |...| |...|      |..|\\..\\  |....|\n";
	cout << setw(156) << " /..../   \\...\\   |...|_____         |....|           __|....|___     |...|_|...|      |..| \\..\\ |....|\n";
	cout << setw(157) << "/..../     \\...\\  |_________|        |____|          |___________|    |_________|      |..|  \\........|\n\n";

	if (counter == 1) 
	{
		cout << setw(139) << "_____________________________________________________________\n";
		cout << setw(140) << "|                                                            |\n\n";
		cout << setw(140) << "|                                                            |\n\n";
		cout << setw(140) << "|               ---> 1. Add information                      |\n\n";
		cout << setw(140) << "|                  2. Search information                     |\n\n";
		cout << setw(140) << "|                  3. Delete information                     |\n\n";
		cout << setw(140) << "|                  4. Go back to the menu                    |\n\n";
		cout << setw(140) << "|                                                            |\n\n";
		cout << setw(140) << "|____________________________________________________________|\n\n";
	}
	else if (counter == 2) {
		cout << setw(139) << "_____________________________________________________________\n";
		cout << setw(140) << "|                                                            |\n\n";
		cout << setw(140) << "|                                                            |\n\n";
		cout << setw(140) << "|                    1. Add information                      |\n\n";
		cout << setw(140) << "|              --->  2. Search information                   |\n\n";
		cout << setw(140) << "|                  3. Delete information                     |\n\n";
		cout << setw(140) << "|                  4. Go back to the menu                    |\n\n";
		cout << setw(140) << "|                                                            |\n\n";
		cout << setw(140) << "|____________________________________________________________|\n\n";
	}
	else if (counter == 3) {
		cout << setw(139) << "_____________________________________________________________\n";
		cout << setw(140) << "|                                                            |\n\n";
		cout << setw(140) << "|                                                            |\n\n";
		cout << setw(140) << "|                    1. Add information                      |\n\n";
		cout << setw(140) << "|                  2. Search information                     |\n\n";
		cout << setw(140) << "|               ---> 3. Delete information                   |\n\n";
		cout << setw(140) << "|                  4. Go back to the menu                    |\n\n";
		cout << setw(140) << "|                                                            |\n\n";
		cout << setw(140) << "|____________________________________________________________|\n\n";
	}
	else if (counter == 4) {
		cout << setw(139) << "_____________________________________________________________\n";
		cout << setw(140) << "|                                                            |\n\n";
		cout << setw(140) << "|                                                            |\n\n";
		cout << setw(140) << "|                    1. Add information                      |\n\n";
		cout << setw(140) << "|                  2. Search information                     |\n\n";
		cout << setw(140) << "|                  3. Delete information                     |\n\n";
		cout << setw(140) << "|             ---> 4. Go back to the menu                    |\n\n";
		cout << setw(140) << "|                                                            |\n\n";
		cout << setw(140) << "|____________________________________________________________|\n\n";
	}
	

	cout << setw(128) << "You can navigate using the arrow keys\n\n";
}

void actions()//display all actions in the start menu
{
	actionsMenu(counter);
	cout << endl;
	
	char key;
	for (int i = 0;;)
	{
		key = _getch();

		if (key == KEY_UP && (counter >= 2 && counter <= 4))
		{
			system("CLS");
			
			counter--;
			actionsMenu(counter);
		}

		if (key == KEY_DOWN && (counter >= 1 && counter <= 3))
		{
			system("CLS");
			
			counter++;
			actionsMenu(counter);
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


void goBack()//function that asks you if you want to go to the start menu
{
	string choice;
	cout << "  ->  Do you want to return to the start menu?" << endl;
	cout << "      Yes/No" << endl;
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
	else //if your input did not match "yes" or "no", repeat the whole action
	{
		string save;
		for (bool i = 1; i;)
		{
			system("CLS");
			cout << "Incorrect input" << endl;
			cout << "  ->  Do you want to return to the start menu?" << endl;
			cout << "      Yes/No" << endl;
			cin >> choice;
			if (choice == "yes" or choice == "Yes")
			{
				system("CLS");
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

void addInfo()//function that allows you to input information
{
	string input;
	cout << setw(122) << "       ______              ___            ___\n";
	cout << setw(125) << "    /......\\            |...|          |...|  \n";
	cout << setw(131) << "   /.../\\...\\     ______|...|    ______|...|        \n";
	cout << setw(123) << "  /..........\\    |...| |...|    |...| |...|\n";
	cout << setw(124) << " /..../   \\...\\   |...|_|...|    |...|_|...| \n";
	cout << setw(125) << "/..../     \\...\\  |_________|    |_________| \n\n";

	cout << setw(120) << "Please enter the information you want to add" << endl;
	if (countInfo == 1)
		cin.ignore();
		
	getline(cin, input);
	push(&head, input);

	cout << endl << "    Your information has been succesfully written" << endl << endl;
	input.clear();
	countInfo = 1;
	goBack();
}

void deleteInfo()//function that allows you to delete information
{
	cout << setw(132) << "        ___     _________     ____           _________    __________    _________\n";
	cout << setw(134) << "       |...|   |.........|   |...|          |.........|  |..........|  |.........|\n";
	cout << setw(134) << "  _____|...|   |...|_____    |...|          |...|_____       |...|     |...|_____ \n";
	cout << setw(134) << " |...| |...|   |.........|   |...|          |.........|      |...|     |.........|\n";
	cout << setw(133) << " |...|_|...|   |...|_____    |...|______    |...|_____       |...|     |...|_____\n";
	cout << setw(135) << " |_________|   |_________|   |__________|   |_________|      |___|     |_________|\n\n";

	cout << endl;
	cout << setw(120) << "Please select the information which you want to delete" << endl << endl;
	printList(head);

	int count = getCount(head);
	int c;

	cout << "      Please enter the number of the element which you want to delete" << endl << endl;
	cout << "        Enter 0 to go back  " << endl;
	cin >> c;

	if (c == 0) 
	{
		goBack();
	}
	if (c <= count && c >= 1)
	{
		c--;
		deleteAtPosition(&head, c);

		cout << "Information has been deleted succesfully" << endl;
		goBack();
	}
	else 
	{
		cout << "Incorrect input" << endl;
		goBack();
	}	
}

void searchInfo()//function that allows you to search information
{

	cout << setw(134) << "Please type the information you would like to search" << endl;

	cin.ignore();
	string input;
	getline(cin, input);

	if (searchData(head, input) == "0") 
	{ 
		cout << "There is no such information" << endl; 
		goBack(); 
	}
	else 
	{
		cout << endl << "Here are your search results: " << searchData(head, input) << endl;
		goBack();
	}
}

void howToUse()//function that displays all the things you can do
{
	cout << endl << endl;
	cout << setw(133) << "|....|      |....|  |...........    |............/\n";
	cout << setw(125) << "|....|      |....|  |..........|    |....|\n";
	cout << setw(131) << "|....|      |....|  |...|           |....|______\n";
	cout << setw(131) << "|....|      |....|  |...|......     |........../\n";
	cout << setw(125) << "|....|      |....|  |..........|    |....|\n";
	cout << setw(134) << "|....|______|....|  ......|....|    |....|________ \n";
	cout << setw(136) << "|________________|  |__________|    |_____________/\n\n\n";
	cout << setw(138) << " _____________________________________________________________" << endl;
	cout << setw(140) << "|                                                            |\n\n";
	cout << setw(140) << "|                                                            |\n\n";
	cout << setw(140) << "|             1. You can add or delete information           |\n\n";
	cout << setw(140) << "|             as you want using the options                  |\n\n";
	cout << setw(140) << "|                                                            |\n\n";
	cout << setw(140) << "|             2. You can use the arrow keys to move          |\n\n";
	cout << setw(140) << "|                                                            |\n\n";
	cout << setw(140) << "|             3. You can search information                  |\n\n";
	cout << setw(140) << "|                                                            |\n\n";
	cout << setw(140) << "|             4. You need to press space when you            |\n\n";
	cout << setw(140) << "|             want to add new events                         |\n\n";
	cout << setw(140) << "|                                                            |\n\n";
	cout << setw(140) << "|             5. Enjoy !                                     |\n\n";
	cout << setw(140) << "|                                                            |\n\n";
	cout << setw(140) << "|____________________________________________________________|\n\n";
	goBack();
}

void credits()
{
	cout << setw(134) << "  __________    _________         ______       ___       ___ \n";
	cout << setw(134) << "|..........|  |.........|       /......\\     |...\\     /...|\n";
	cout << setw(134) << "|...|     |...|_____       /.../\\...\\    |....\\   /....|\n";
	cout << setw(134) << "|...|     |.........|     /..........\\   |.|\\..\\ /../|.|\n";
	cout << setw(135) << "|...|     |...|_____     /..../   \\...\\  |.|         |.| \n";
	cout << setw(136) << "|___|     |_________|   /____/     \\___\\ |_|         |_|\n\n\n";

	cout << setw(130) << " ______________________________________________________" << endl << endl;
	cout << setw(130) << "|                                                    |" << endl << endl;
	cout << setw(130) << "|         Marieta Stoycheva - Scrum Trainer          |" << endl << endl;
	cout << setw(130) << "|       Georgi Hrisimov - Front-End Developer        |" << endl << endl;
	cout << setw(130) << "|         Egor Semenov - Back-End Developer          |" << endl << endl;
	cout << setw(130) << "|                    Yoan Tanev - QA                 |" << endl << endl;
	cout << setw(130) << "|                                                    |" << endl << endl;
	cout << setw(130) << "|____________________________________________________|" << endl << endl;

	goBack();
}

void move()//function that depending on your input redirects you to another manu 
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