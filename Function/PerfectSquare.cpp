// print the perfect square between the number
#include <iostream>
#include <cmath>
using namespace std;

void perfect(int n)
{
    for (int i = 1; i <= n; i++)
    {

        if (sqrt(i) == sqrt(i))
        {
            cout << sqrt(i)<<" ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter the last number: ";
    cin >> n;

    perfect(n);
    return 0;
}