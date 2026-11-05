#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {10, 20, 30, 40};
    int n = 4, index = 2, value = 25;
    for (int i = n; i > index; i--)
        arr[i] = arr[i - 1];
    arr[index] = value;
    n++;
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
