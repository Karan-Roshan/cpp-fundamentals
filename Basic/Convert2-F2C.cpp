// convert Fahrenheit to Celsius
#include <iostream>
using namespace std;

int main() {
    int F;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> F;

    float C = (F-32) * 5/9;
    cout << "Temperature in Celsius: " << C;
    return 0;
}