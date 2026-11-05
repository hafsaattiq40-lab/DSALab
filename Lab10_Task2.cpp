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
    if(top == NULL)
        cout << "Nothing to undo" << endl;
    else
    {
        Node* temp = top;
        cout << "Undone: " << top->data << endl;
        top = top->next;
        delete temp;
    }
}
void peek()
{
    if(top == NULL)
        cout << "Editor is empty" << endl;
    else
        cout << "Last word: " << top->data << endl;
}
int size()
{
    int count = 0;
    Node* temp = top;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    int choice;
    string word;
    do
    {
        cout << "\n1. Type word" << endl;
        cout << "2. Undo" << endl;
        cout << "3. Word count" << endl;
        cout << "4. Last word" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        if(choice == 1)
        {
            cout << "Enter word: ";
            cin >> word;
            push(word);
        }
        else if(choice == 2)
        {
            pop();
            cout << "Word count: " << size() << endl;
        }
        else if(choice == 3)
            cout << "Word count: " << size() << endl;
        else if(choice == 4)
            peek();
        else if(choice == 5)
            cout << "Exiting program" << endl;
        else
            cout << "Invalid choice" << endl;
    }
    while(choice != 5);
    return 0;
}