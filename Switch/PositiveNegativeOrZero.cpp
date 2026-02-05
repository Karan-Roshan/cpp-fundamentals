// Positive, negative or zero
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    switch (num > 1)
    {
    case 1:
        cout << "Positive number";
        break;

    case 0:
        switch (num < 0)
        {
        case 1:
            cout << "Negative number";
            break;
        case 0:
            cout << "Zero";
            break;
        }
    }
    return 0;
}