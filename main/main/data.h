#pragma once

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#include <string>

using namespace std;

struct Node {
	string data;
	Node* next;
};

void push(Node** head_ref, string new_data);
void printList(Node* node);
int getCount(Node* head);
void deleteAtPosition(Node** head_ref, int position);
string searchData(Node* head, string key);