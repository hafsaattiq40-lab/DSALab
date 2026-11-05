#include <iostream>
using namespace std;
struct Node { int data; Node* next; };
void display(Node* head)
{
    while (head != NULL) { cout << head->data << " "; head = head->next; }
    cout << endl;
}
void deleteAtStart(Node*& head)
{
    if (head == NULL) return;
    Node* temp = head;
    head = head->next;
    delete temp;
}
int main()
{
    Node* head = new Node{10, new Node{20, new Node{30, new Node{40, new Node{50, NULL}}}}};
    deleteAtStart(head);
    display(head);
    deleteAtStart(head);
    display(head);
    while (head != NULL) deleteAtStart(head);
    return 0;
}
