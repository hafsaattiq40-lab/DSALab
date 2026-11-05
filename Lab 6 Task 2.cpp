#include <iostream>
using namespace std;
struct Node { int data; Node* next; };
void display(Node* head)
{
    while (head != NULL) { cout << head->data << " "; head = head->next; }
    cout << endl;
}
void deleteAtEnd(Node*& head)
{
    if (head == NULL) return;
    if (head->next == NULL) { delete head; head = NULL; return; }
    Node* temp = head;
    while (temp->next->next != NULL) temp = temp->next;
    delete temp->next;
    temp->next = NULL;
}
void deleteAtPosition(Node*& head, int position)
{
    if (head == NULL || position < 1) return;
    if (position == 1)
    {
        Node* temp = head; head = head->next; delete temp; return;
    }
    Node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) temp = temp->next;
    if (temp == NULL || temp->next == NULL) return;
    Node* delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
}
int main()
{
    Node* head = new Node{10, new Node{20, new Node{30, new Node{40, new Node{50, NULL}}}}};
    deleteAtEnd(head);
    display(head);
    deleteAtPosition(head, 2);
    display(head);
    while (head != NULL) { Node* temp = head; head = head->next; delete temp; }
    return 0;
}
