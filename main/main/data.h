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
void insertAfter(Node* prev_node, string new_data);
void append(Node** head_ref, string new_data);
void printList(Node* node);
int getCount(Node* head);
void deleteNode(Node** head_ref, string key);
void deleteAtPosition(Node** head_ref, int position);
string searchData(Node* head, string key);