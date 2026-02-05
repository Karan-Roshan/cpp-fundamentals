// check even or odd number
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    switch (n % 2 == 0)
    {
    case 0:
        cout << "Odd";
        break;

    case 1:
        cout << "Even";
        break;
    }
    return 0;
}