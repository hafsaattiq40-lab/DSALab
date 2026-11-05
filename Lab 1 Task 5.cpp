#include <iostream>
using namespace std;
struct Student
{
    string name;
    int rollNumber;
    float marks;
};
int main()
{
    Student s;
    cout<<"Enter student name: ";
    cin>>s.name;
    cout<<"Enter roll number: ";
    cin>>s.rollNumber;
    cout<<"Enter marks: ";
    cin>>s.marks;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll Number: "<<s.rollNumber<<endl;
    cout<<"Marks: "<<s.marks<<endl;
    if(s.marks>=50)
        cout<<"Result: Pass"<<endl;
    else
        cout<<"Result: Fail"<<endl;
    return 0;
}
