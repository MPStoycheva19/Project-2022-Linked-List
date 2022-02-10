#include "Menu.h"
#include "data.h"

using namespace std;

void push(Node** head_ref, string new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(Node* node)
{
    while (node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}

void insertAfter(Node* prev_node, string new_data)
{
    if (prev_node == NULL)
    {
        cout << "Error";
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(Node** head_ref, string new_data)
{
    Node* new_node = new Node();

    Node* last = *head_ref;

    new_node->data = new_data;

    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;
    return;
}

int search(Node* head, string x)
{
    int counter = 0;
    Node* current = head;
    while (current != NULL)
    {
        counter++;
        if (current->data == x)
            return counter;
        current = current->next;
    }
    return 0;
}

string searchData(Node* head, string key)
{
    if (head == NULL)
    {
        return "0";
    }
    if (head->data == key)
    {
        return head->data;
    }
    else
    {
        return searchData(head->next, key);
    }
}

void deleteNode(Node** head_ref, string key)
{
    Node* temp = *head_ref;
    Node* prev = NULL;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        delete temp;
        return;
    }

    else
    {
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
            return;
        prev->next = temp->next;
        delete temp;
    }
}