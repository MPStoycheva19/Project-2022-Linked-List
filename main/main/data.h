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
int search(Node* head, string x);
void deleteNode(Node** head_ref, string key);
string searchData(Node* head, string key);