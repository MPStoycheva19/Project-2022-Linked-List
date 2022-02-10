#pragma once
#include <string>

using namespace std;

struct Article {
	string nameOfArticle;
	string data;
	string participants;
	int yearOfEvent;
	int ID;  //Код на Грей
	
};

void addInfo();
void deleteInfo();
void searchInfo();
void goBack();