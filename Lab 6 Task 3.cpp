#include <iostream>
using namespace std;
struct Node { int data; Node* next; };
void deleteByValue(Node*& head, int value)
{
    if (head == NULL) { cout << "Value not found" << endl; return; }
    if (head->data == value)
    {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL && temp->next->data != value)
        temp = temp->next;
    if (temp->next == NULL)
        cout << "Value not found" << endl;
    else
    {
        Node* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
    }
}
void display(Node* head)
{
    while (head != NULL) { cout << head->data << " "; head = head->next; }
    cout << endl;
}
int main()
{
    Node* head = new Node{10, new Node{20, new Node{30, new Node{40, new Node{50, NULL}}}}};
    int value;
    cout << "Linked List: "; display(head);
    cout << "Enter value to delete: "; cin >> value;
    deleteByValue(head, value);
    cout << "Updated List: "; display(head);
    while (head != NULL) { Node* temp = head; head = head->next; delete temp; }
    return 0;
}
