// print the volume of the cylinder
#include <iostream>
using namespace std;

int main()
{
    int r, h;
    cout << "Enter the radius(r) of the cylinder: ";
    cin >> r;
    cout << "Enter the height(h) of the cylinder: ";
    cin >> h;

    float volume = 3.14 * r * r * h;
    cout << "Volume of the cyliner: " << volume;
    return 0;
}