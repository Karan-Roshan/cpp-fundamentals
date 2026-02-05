// print the array
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {23, 974, 83, 9, 75, 29, 97, 8, 23, 5};

    cout << "Element of the array: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << ", ";
    }
    return 0;
}