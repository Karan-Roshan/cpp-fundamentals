// largest among three number
#include <iostream>
using namespace std;

int main()
{
    int a = 8;
    int b = 3;
    int c = 9;

    if (a > b && a > c)
    {
        cout << "a is greater";
    }
    else if (b > a && b > c)
    {
        cout << "b is greater";
    }
    else if (c > a && c > b)
    {
        cout << "c is greater";
    }
    else if (a == b && a > c)
    {
        cout << "a & b are greater";
    }
    else if (b == c && c > a)
    {
        cout << "b & c are greater";
    }
    else if (c == a && c > b)
    {
        cout << "a & c are greater";
    }
    else
    {
        cout << "a, b & c are greater";
    }
    return 0;
}