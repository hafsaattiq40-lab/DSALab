#include <iostream>
using namespace std;
struct Node { int data; Node* next; };
int main()
{
    Node* head = NULL;
    Node* temp;
    int n, value;
    cout << "Enter number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value: ";
        cin >> value;
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL) head = newNode;
        else
        {
            temp = head;
            while (temp->next != NULL) temp = temp->next;
            temp->next = newNode;
        }
    }
    cout << "Enter value to insert at end: ";
    cin >> value;
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) head = newNode;
    else
    {
        temp = head;
        while (temp->next != NULL) temp = temp->next;
        temp->next = newNode;
    }
    temp = head;
    cout << "Linked List: ";
    while (temp != NULL) { cout << temp->data << " "; temp = temp->next; }
    while (head != NULL) { temp = head; head = head->next; delete temp; }
    return 0;
}
