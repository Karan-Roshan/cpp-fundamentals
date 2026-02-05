// compute the quotient and remainder
#include <iostream>
using namespace std;

int main()
{
    int dividend, divisor;
    cout << "Enter Dividend: ";
    cin >> dividend;

    cout << "Enter Divisor: ";
    cin >> divisor;

    int remainder = dividend % divisor;
    int quotient = dividend / divisor;

    cout << "The quotient of the division is : " << quotient << endl;
    cout << "The remainder of the division is : " << remainder << endl;
    return 0;
}