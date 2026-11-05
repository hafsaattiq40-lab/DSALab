#include <iostream>
using namespace std;
int main()
{
    int numbers[10];
    int positive=0;
    int negative=0;
    int zero=0;
    for(int i=0;i<10;i++)
    {
        cout<<"Enter number "<<i+1<<": ";
        cin>>numbers[i];
    }
    for(int i=0;i<10;i++)
    {
        if(numbers[i]>0)
            positive++;
        else if(numbers[i]<0)
            negative++;
        else
            zero++;
    }
    cout<<"Positive numbers = "<<positive<<endl;
    cout<<"Negative numbers = "<<negative<<endl;
    cout<<"Zeros = "<<zero<<endl;
    return 0;
}
