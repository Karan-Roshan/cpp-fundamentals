// area of any triangle using Heron's formula
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float s1, s2, s3;
    cout << "Enter side1(s1) : ";
    cin >> s1;
    cout << "Enter side2(s2) : ";
    cin >> s2;
    cout << "Enter side3(s3) : ";
    cin >> s3;

    float side = (s1 + s2 + s3) / 2;
    float area = sqrt(side * (side - s1) * (side - s2) * (side - s3));

    cout << "area of the triangle: " << area;
    return 0;
}