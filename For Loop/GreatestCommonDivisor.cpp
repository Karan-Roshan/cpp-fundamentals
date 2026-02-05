// Greatest Common Divisor
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, GCD;
    cout << "Enter number(num1) :";
    cin >> num1;
    cout << "Enter number(num2) :";
    cin >> num2;

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            GCD = i;
        }
    }
    cout << "Greatest Common Divisor: " << GCD;
    return 0;
}