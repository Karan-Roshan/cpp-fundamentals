// Displays the sum of n odd natural numbers.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int sum = 0;
    cout << "The odd number from 1 to " << n << " is: ";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        else
        {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
    cout << "Sum of odd number from 1 to " << n << " is: " << sum;
    return 0;
}