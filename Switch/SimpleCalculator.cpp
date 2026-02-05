#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    char ch;

    cout << "Enter number1(n1): ";
    cin >> n1;
    cout << "Enter number2(n2): ";
    cin >> n1;

    cout << "Enter operator(+, -, *, /, %): ";
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << n1 + n2;
        break;
    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break;
    case '/':
        cout << n1 / n2;
        break;
    case '%':
        cout << n1 % n2;
        break;

    default:
        cout << "Invalid input! Please enter valid operator(+, -, *, /, %).";
        break;
    }
    return 0;
}