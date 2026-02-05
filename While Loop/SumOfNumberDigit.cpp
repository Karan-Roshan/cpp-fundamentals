// sum of the digits of a given number.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    int r, sum = 0;

    while (num > 0)
    {
        r = num % 10;
        num = num / 10;
        sum = sum + r;
    }
    cout << "Sum of the number: " << sum;
    return 0;
}