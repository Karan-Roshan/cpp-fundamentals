// Display n terms of natural numbers and their sum
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int sum = 0;

    cout << "Natural Number: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum: " << sum << endl;

    return 0;
}