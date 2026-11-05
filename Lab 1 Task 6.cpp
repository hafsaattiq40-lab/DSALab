#include <iostream>
using namespace std;
struct Product
{
    int productID;
    string productName;
    float price;
    int quantity;
};
int main()
{
    Product p;
    float totalPrice;
    cout<<"Enter product ID: ";
    cin>>p.productID;
    cout<<"Enter product name: ";
    cin>>p.productName;
    cout<<"Enter price: ";
    cin>>p.price;
    cout<<"Enter quantity: ";
    cin>>p.quantity;
    totalPrice=p.price*p.quantity;
    cout<<"Product ID: "<<p.productID<<endl;
    cout<<"Product Name: "<<p.productName<<endl;
    cout<<"Price: "<<p.price<<endl;
    cout<<"Quantity: "<<p.quantity<<endl;
    cout<<"Total Price: "<<totalPrice<<endl;
    return 0;
}
