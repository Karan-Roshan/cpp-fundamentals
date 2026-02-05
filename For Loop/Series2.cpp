// print the series
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of nth term: ";
    cin >> n;

    int tsum = 0, sum;
    for (int i = 1; i <= 5; i++)
    {
        sum = 0;
        for (int j = 1; j <= i; j++)
        {
            sum += j;
            tsum += j;
            cout << j;
            if (j < i)
            {
                cout << " + ";
            }
        }
        cout << " = " << sum;
        cout << endl;
    }
    cout << "Sum of the series: " << tsum;
    return 0;
}