// Sum of the two given integers and count the number of digits in the sum value.
#include <iostream>
using namespace std;

int main()
{
    int a, b, r;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int sum = a + b;
    cout << "Sum of two number: " << sum << endl;

    int digit_sum = 0;
    ;
    while (sum > 0)
    {
        r = sum % 10;
        sum = sum / 10;
        digit_sum += r;
    }
    cout << "Count the number of digits in the sum value: " << digit_sum;
    return 0;
}