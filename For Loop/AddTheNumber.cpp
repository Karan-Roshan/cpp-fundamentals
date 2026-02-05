//add all the numbers from 1 to a given number
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum of all number between 0 to " << n << " is " << sum;
    return 0;
}