// find a prime number within a range i.e. 1 to 100 and count the total no. of prime.
#include <iostream>
using namespace std;

int main()
{
    for (int num = 2; num <= 100; num++)
    {
        int count = 0;
        for (int i = 2; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
            else
            {
                continue;
            }
        }
        if (count == 1)
        {
            cout << num << endl;
        }
    }
    return 0;
}