#include <iostream>
using namespace std;
int main()
{
    int arr[10], choice, key;
    cout << "Enter 10 numbers: ";
    for(int i = 0; i < 10; i++)
        cin >> arr[i];
    do
    {
        cout << "\n1. Selection Sort";
        cout << "\n2. Bubble Sort";
        cout << "\n3. Insertion Sort";
        cout << "\n4. Binary Search";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                for(int i = 0; i < 9; i++)
                {
                    int minIndex = i;
                    for(int j = i + 1; j < 10; j++)
                    {
                        if(arr[j] < arr[minIndex])
                            minIndex = j;
                    }
                    int temp = arr[i];
                    arr[i] = arr[minIndex];
                    arr[minIndex] = temp;
                }
                break;
            case 2:
                for(int i = 0; i < 9; i++)
                {
                    for(int j = 0; j < 9 - i; j++)
                    {
                        if(arr[j] > arr[j + 1])
                        {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                break;
            case 3:
                for(int i = 1; i < 10; i++)
                {
                    int keyValue = arr[i];
                    int j = i - 1;
                    while(j >= 0 && arr[j] > keyValue)
                    {
                        arr[j + 1] = arr[j];
                        j--;
                    }
                    arr[j + 1] = keyValue;
                }
                break;
            case 4:
                for(int i = 0; i < 9; i++)
                {
                    for(int j = 0; j < 9 - i; j++)
                    {
                        if(arr[j] > arr[j + 1])
                        {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                cout << "Enter value to search: ";
                cin >> key;
                int low, high, mid, result;
                low = 0;
                high = 9;
                result = -1;
                while(low <= high)
                {
                    mid = (low + high) / 2;
                    if(arr[mid] == key)
                    {
                        result = mid;
                        break;
                    }
                    if(key > arr[mid])
                        low = mid + 1;
                    else
                        high = mid - 1;
                }
                if(result != -1)
                    cout << "Element found at index " << result << endl;
                else
                    cout << "Element not found" << endl;
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice" << endl;
        }
        if(choice >= 1 && choice <= 3)
        {
            cout << "Sorted array: ";
            for(int i = 0; i < 10; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
    while(choice != 5);
    return 0;
}