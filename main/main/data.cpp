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
    int c = 1;
    while (node != NULL)
    {
        cout << c << ". " << node->data << endl;
        node = node->next;
        c++;
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

int getCount(Node* head)
{
    int count = 0;
    Node* current = head;
    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

string searchData(Node* head, string key)
{
    if (head == NULL)
        return "0";

    size_t found = head->data.find(key);
    if (found != string::npos)
        return head->data;

    return searchData(head->next, key);
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

void deleteAtPosition(Node** head_ref, int position)
{

    if (*head_ref == NULL)
        return;
    Node* temp = *head_ref;

    if (position == 0) {

        *head_ref = temp->next;

        free(temp);
        return;
    }

    for (int i = 0; temp != NULL && i < position - 1; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL)
        return;

    Node* next = temp->next->next;

    free(temp->next);

    temp->next = next;
}