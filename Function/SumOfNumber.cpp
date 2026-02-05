// Sum of the number in the array
#include <iostream>
using namespace std;

void sum()
{
    int n, arr[n];
    int sum = 0;

    cout << "Enter size of array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "arr[" << n << "] = ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum: " << sum;
}

int main()
{
    sum();
}

// Example: 8 2 3 0 7