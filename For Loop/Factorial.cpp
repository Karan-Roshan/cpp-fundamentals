// find the factorial of the number
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    int fact;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << num << " is " << fact;
    return 0;
}