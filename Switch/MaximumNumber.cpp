// Find maximum between two numbers
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    switch (num1 > num2)
    {
    case 0:
        cout << num2 << " is maximum.";
        break;

    case 1:
        cout << num1 << " is maximum.";
        break;
    }
    return 0;
}