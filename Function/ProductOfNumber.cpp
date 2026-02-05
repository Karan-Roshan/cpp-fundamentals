// product of the number
#include <iostream>
using namespace std;

void array_product(int arr[], int n)
{
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product = product * arr[i];
    }
    cout << "Product of element in array: " << product;
}

int main()
{
    int arr[] = {8, 2, 3, -1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    array_product(arr, n);
    return 0;
}
