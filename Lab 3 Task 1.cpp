#include <iostream>
using namespace std;
struct Product
{
    string name;
    int code;
    float price;
};
int main()
{
    int n;
    cout<<"Enter number of products: ";
    cin>>n;
    Product *products=new Product[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter product name: ";
        cin>>products[i].name;
        cout<<"Enter product code: ";
        cin>>products[i].code;
        cout<<"Enter product price: ";
        cin>>products[i].price;
    }
    cout<<"Product Details"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Name: "<<products[i].name<<endl;
        cout<<"Code: "<<products[i].code<<endl;
        cout<<"Price: "<<products[i].price<<endl;
    }
    delete[] products;
    return 0;
}
