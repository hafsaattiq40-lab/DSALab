#include <iostream>
using namespace std;
struct Node { int data; Node* next; };
int main()
{
    Node* head = NULL;
    Node* temp;
    int n, value, search;
    cout << "Enter number of nodes: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value: "; cin >> value;
        Node* newNode = new Node{value, NULL};
        if (head == NULL) head = newNode;
        else { temp = head; while (temp->next != NULL) temp = temp->next; temp->next = newNode; }
    }
    cout << "Enter value before which to insert: "; cin >> search;
    cout << "Enter new value: "; cin >> value;
    if (head != NULL && head->data == search)
        head = new Node{value, head};
    else
    {
        temp = head;
        while (temp != NULL && temp->next != NULL && temp->next->data != search) temp = temp->next;
        if (temp == NULL || temp->next == NULL) cout << "Value not found";
        else temp->next = new Node{value, temp->next};
    }
    temp = head; cout << "\nLinked List: ";
    while (temp != NULL) { cout << temp->data << " "; temp = temp->next; }
    while (head != NULL) { temp = head; head = head->next; delete temp; }
    return 0;
}
