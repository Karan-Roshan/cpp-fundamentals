// Sum of first 50natural number
#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i <= 50; i++)
    {
        sum += i;
    }
    cout << "Sum of first 50 natural number: " << sum << endl;
    return 0;
}