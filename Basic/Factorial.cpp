// calculate the factorial of a number (a non-negative integer)
#include <iostream>
using namespace std;

void factorial()
{
    int num;
    int fact;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << num << " = " << fact << endl;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    factorial();
    return 0;
}