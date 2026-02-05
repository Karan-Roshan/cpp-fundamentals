// find the sum of an A.P. series.
#include <iostream>
using namespace std;

int main()
{
    int a, n, d;
    cout << "Enter the starting number(a): ";
    cin >> a;
    cout << "Enter the last number(n): ";
    cin >> n;
    cout << "Enter the common difference: ";
    cin >> d;

    int sum = 0;
    cout << "The AP Series: ";
    for (int i = a; i <= n; i = i + d)
    {
        sum = sum + i;
        cout << i << " ";
    }
    cout << endl;
    cout << "Sum of given Series: " << sum;
    return 0;
}