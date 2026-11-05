#include <iostream>
using namespace std;
int main()
{
    int num[5];
    int sum=0;
    double avg;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter number "<<i+1<<": ";
        cin>>num[i];
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+num[i];
    }
    avg=sum/5.0;
    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<avg<<endl;
    return 0;
}
