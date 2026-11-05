#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* top = NULL;
void push(int x)
{
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}
int pop()
{
    if(top == NULL)
        return -1;
    Node* temp = top;
    int x = top->data;
    top = top->next;
    delete temp;
    return x;
}
int main()
{
    int num, rem;
    cout << "Enter number: ";
    cin >> num;
    if(num == 0)
        cout << "Binary: 0" << endl;
    else
    {
        while(num > 0)
        {
            rem = num % 2;
            push(rem);
            num = num / 2;
        }
        cout << "Binary: ";
        while(top != NULL)
            cout << pop();
        cout << endl;
    }
    return 0;
}