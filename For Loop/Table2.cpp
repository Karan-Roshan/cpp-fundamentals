// Display the multiplication table vertically from 1 to n.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Multiple table from 1 to " << n << " : " << endl;

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i << "*" << j << "=" << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}