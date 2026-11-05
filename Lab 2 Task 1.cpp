#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int *ptr=arr;
    int even=0, odd=0;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter number "<<i+1<<": ";
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        if(*(ptr+i)%2==0)
            even++;
        else
            odd++;
    }
    cout<<"Even numbers = "<<even<<endl;
    cout<<"Odd numbers = "<<odd<<endl;
    return 0;
}
