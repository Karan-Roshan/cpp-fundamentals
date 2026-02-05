// fing the maximum number from three number
#include <iostream>
using namespace std;

void max_of_three(int a, int b, int c)
{
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
    else if (b == a && b > c)
    {
        cout << "a & b are greater";
    }
    else if (b == c && b > a)
    {
        cout << "b & c are greater";
    }
    else if (c == a && c > b)
    {
        cout << "c & a are greater";
    }
    else
    {
        cout << "a, b & c are equal";
    }
}

int main()
{
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    max_of_three(a, b, c);
    return 0;
}