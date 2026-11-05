#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int value = 40, low = 0, high = 4, position = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == value)
        {
            position = mid;
            break;
        }
        else if (arr[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (position != -1)
        cout << "Value found at index " << position;
    else
        cout << "Value not found";
    return 0;
}
