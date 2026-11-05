#include <iostream>
using namespace std;
int main()
{
    int num;
    int *ptr;
    cout<<"Enter an integer: ";
    cin>>num;
    cout<<"Value before modification: "<<num<<endl;
    ptr=&num;
    *ptr=20;
    cout<<"Value after modification = "<<num<<endl;
    return 0;
}
