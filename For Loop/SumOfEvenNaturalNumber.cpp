//  sum of the n terms of even natural numbers.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum = 0;
    cout << "Even natural numbe4: ";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;
    cout << "Sum of even natural number: " << sum;
    return 0;
}