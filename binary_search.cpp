// C++ program to implement Binary Search
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int key;
    int low = 0, high = 4, mid;
    bool found = false;

    cout << "Enter the element to search: ";
    cin >> key;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            cout << "Element found at position " << mid + 1;
            found = true;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found == false)
    {
        cout << "Element not found";
    }

    return 0;
}