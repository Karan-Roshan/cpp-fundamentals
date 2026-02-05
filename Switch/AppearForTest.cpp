#include <iostream>
using namespace std;

int main()
{
    int age;
    int i;

    cout << "Enter age: ";
    cin >> age; 
    
    if (age == 18)
    {
        i = 0;
    }
    if (age < 18)
    {
        i = -1;
    }
    if (age > 18)
    {
        i = 1;
    }

    switch (i)
    {
    case 0:
        cout << "Appear for test 1";
        break;

    case (1):
        cout << "Appear for test 2";
        break;

    default:
        cout << "Not appear for test";
        break;
    }
    return 0;
}