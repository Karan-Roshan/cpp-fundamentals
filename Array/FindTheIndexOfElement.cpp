// find the index of the element
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 5, 34, 68, 39, 13, 585, 1, 90, 0};

    int n;
    cout << "Enter the element you want to find the index: ";
    cin >> n;

    cout << "Index of the element: ";
    for (int i = 0; i < 10; i++)
    {
        if (n == arr[i])
        {
            cout << i;
        }
    }
    return 0;
}