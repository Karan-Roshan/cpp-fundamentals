// occurance of integer of an array
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int x;
    cout << "Ente the number you want to find the number of accurance: ";
    cin >> x;

    int arr[n];
    int count=0;

    cout << "arr[" << n << "] = ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            count++;
        }
    }
    cout << "Occurance of " << x << ": " << count;
    return 0;
}

// Example: 1 1 2 2 2 2 3