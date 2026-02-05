// taking element from the user for array
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "arr[" << n << "] = ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}