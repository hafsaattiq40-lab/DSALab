#include <iostream>
using namespace std;
int main()
{
    int num;
    int *p=&num;
    int **pp=&p;
    cout<<"Enter an integer: ";
    cin>>num;
    cout<<"Original value: "<<num<<endl;
    **pp=**pp+10;
    cout<<"Modified value: "<<num<<endl;
    return 0;
}
