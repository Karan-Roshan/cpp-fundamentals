// fing=d the third angle of the triangle
#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3;
    cout << "Enter angle1: ";
    cin >> a1;
    cout << "Enter angle2: ";
    cin >> a2;

    a3 = 180 - (a1 + a2);

    cout << "Third angle of the triangle: " << a3;
    return 0;
}