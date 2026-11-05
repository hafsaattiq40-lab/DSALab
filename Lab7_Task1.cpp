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
    int values[] = {10,20,30,40,50};
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
    newNode->data = 5;
    newNode->prev = NULL;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    Node* temp = head;
    while(temp->data != 20)
        temp = temp->next;
    newNode = new Node();
    newNode->data = 25;
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode = new Node();
    newNode->data = 60;
    newNode->next = NULL;
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
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