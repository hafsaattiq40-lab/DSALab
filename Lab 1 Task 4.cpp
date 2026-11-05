#include <iostream>
using namespace std;
int main()
{
    int a,b;
    int *p1,*p2;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Before swapping: a = "<<a<<" b = "<<b<<endl;
    p1=&a;
    p2=&b;
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<"After swapping: a = "<<a<<" b = "<<b<<endl;
    return 0;
}
