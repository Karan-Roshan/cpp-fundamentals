// print the volume of the cube
#include <iostream>
using namespace std;

int main() {
    int side;
    cout << "Enter side of the cube: ";
    cin >> side;

    float volume = side * side * side;

    cout << "Volume of the cube: " << volume;
    return 0;
}