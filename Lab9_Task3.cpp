#include <iostream>
using namespace std;
const int MAX = 5;
int stack[MAX];
int top = -1;
void push(int x)
{
    if(top == MAX - 1)
        cout << "Stack overflow" << endl;
    else
        stack[++top] = x;
}
void pop()
{
    if(top == -1)
        cout << "Stack underflow" << endl;
    else
        cout << "Popped: " << stack[top--] << endl;
}
int search(int x)
{
    int steps = 1;
    for(int i = top; i >= 0; i--)
    {
        if(stack[i] == x)
            return steps;
        steps++;
    }
    return -1;
}
int main()
{
    int x;
    cout << "Enter five integers: ";
    for(int i = 0; i < MAX; i++)
    {
        cin >> x;
        push(x);
    }
    cout << "Trying to push sixth value: ";
    cin >> x;
    push(x);
    cout << "Search a value present in stack: ";
    cin >> x;
    int result = search(x);
    if(result != -1)
        cout << "Steps from top: " << result << endl;
    else
        cout << "Value not found" << endl;
    cout << "Search a value absent from stack: ";
    cin >> x;
    result = search(x);
    if(result != -1)
        cout << "Steps from top: " << result << endl;
    else
        cout << "Value not found" << endl;
    while(top != -1)
        pop();
    pop();
    return 0;
}