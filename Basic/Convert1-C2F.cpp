// convert Celsius to Fahrenheit
#include <iostream>
using namespace std;

int main() {
    int C;
    cout << "Enter temperature in Celsius: ";
    cin >> C;

    float F = (9 * C)/5 + 32;
    cout << "Temperature in Fahrenheit: " << F;
    return 0;
}