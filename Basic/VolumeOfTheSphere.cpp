// print the volume of the sphere
#include <iostream>
using namespace std;

int main()
{
    int r;
    cout << "Enter radius(r): ";
    cin >> r;

    float volume = (4 * 3.14 * r * r * r) / 3;
    cout << "Volume of the sphere: " << volume;
    return 0;
}