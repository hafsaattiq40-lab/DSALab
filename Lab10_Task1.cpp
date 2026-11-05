#include <iostream>
using namespace std;
struct Node
{
    string data;
    Node* next;
};
Node* top = NULL;
void push(string x)
{
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}
void pop()
{
    if(top == NULL || top->next == NULL)
        cout << "Cannot go back" << endl;
    else
    {
        Node* temp = top;
        top = top->next;
        delete temp;
        cout << "Current page: " << top->data << endl;
    }
}
void peek()
{
    if(top == NULL)
        cout << "No page open" << endl;
    else
        cout << "Current page: " << top->data << endl;
}
void display()
{
    if(top == NULL)
        cout << "History is empty" << endl;
    else
    {
        Node* temp = top;
        cout << "Browser history:" << endl;
        while(temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
}
int main()
{
    int choice;
    string page;
    do
    {
        cout << "\n1. Visit page" << endl;
        cout << "2. Back" << endl;
        cout << "3. Current page" << endl;
        cout << "4. History" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        if(choice == 1)
        {
            cout << "Enter page name: ";
            cin >> page;
            push(page);
        }
        else if(choice == 2)
            pop();
        else if(choice == 3)
            peek();
        else if(choice == 4)
            display();
        else if(choice == 5)
            cout << "Exiting program" << endl;
        else
            cout << "Invalid choice" << endl;
    }
    while(choice != 5);
    return 0;
}