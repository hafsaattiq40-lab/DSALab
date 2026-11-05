#include <iostream>
using namespace std;
struct Node { int data; Node* next; };
void display(Node* head)
{
    while (head != NULL) { cout << head->data << " "; head = head->next; }
    cout << endl;
}
int main()
{
    Node* head = NULL;
    Node* temp;
    int n, value, choice, search;
    cout << "Enter number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value: "; cin >> value;
        Node* newNode = new Node{value, NULL};
        if (head == NULL) head = newNode;
        else { temp = head; while (temp->next != NULL) temp = temp->next; temp->next = newNode; }
    }
    do
    {
        cout << "\n1. Insert at Start\n2. Insert at End\n3. Insert in Middle\n4. Display List\n5. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter new value: "; cin >> value;
            Node* newNode = new Node{value, head}; head = newNode;
        }
        else if (choice == 2)
        {
            cout << "Enter new value: "; cin >> value;
            Node* newNode = new Node{value, NULL};
            if (head == NULL) head = newNode;
            else { temp = head; while (temp->next != NULL) temp = temp->next; temp->next = newNode; }
        }
        else if (choice == 3)
        {
            cout << "Enter existing value: "; cin >> search;
            cout << "Enter new value: "; cin >> value;
            temp = head; while (temp != NULL && temp->data != search) temp = temp->next;
            if (temp == NULL) cout << "Value not found\n";
            else { Node* newNode = new Node{value, temp->next}; temp->next = newNode; }
        }
        else if (choice == 4) display(head);
    } while (choice != 5);
    while (head != NULL) { temp = head; head = head->next; delete temp; }
    return 0;
}
