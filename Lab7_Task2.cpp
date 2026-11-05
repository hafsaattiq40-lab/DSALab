#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* prev;
    Node* next;
};
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int values[] = {101,102,103,104,105};
    for(int i = 0; i < 5; i++)
    {
        Node* newNode = new Node();
        newNode->data = values[i];
        newNode->prev = tail;
        newNode->next = NULL;
        if(head == NULL)
            head = newNode;
        else
            tail->next = newNode;
        tail = newNode;
    }
    Node* newNode = new Node();
    newNode->data = 100;
    newNode->prev = NULL;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    Node* temp = head;
    while(temp->data != 103)
        temp = temp->next;
    newNode = new Node();
    newNode->data = 1035;
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode = new Node();
    newNode->data = 106;
    newNode->prev = tail;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
    temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
    temp = head;
    while(temp->data != 104)
        temp = temp->next;
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
    temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete temp;
    temp = head;
    while(temp != NULL)
    {
        cout << temp->data;
        if(temp->next != NULL)
            cout << " <-> ";
        temp = temp->next;
    }
    cout << endl;
    return 0;
}