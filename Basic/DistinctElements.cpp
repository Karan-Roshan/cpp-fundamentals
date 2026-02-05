// takes a list and returns a new list with distinct elements from the first list.
// Sample List : [1,2,3,3,3,3,4,5]
#include <iostream>
using namespace std;

void distinct(int arr[], int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }

            if (i == j)

                cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 3, 3, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    distinct(arr, n);
    return 0;
}