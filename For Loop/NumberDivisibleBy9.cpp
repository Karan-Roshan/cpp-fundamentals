// find the number and sum of all integers between 100 and 200 which are divisible by 9.
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the number range: ";
    cin >> a >> b;

    int sum = 0;
    cout << "Numbers between " << a << " and " << b << ", divisible by 9: ";
    for (int i = a; i < b; i++)
    {
        if (i % 9 == 0)
        {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;
    cout << "Sum: " << sum;
    return 0;
}