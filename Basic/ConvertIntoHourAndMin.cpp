// convert a given number into hours and minutes
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number you want to convert into hr & min: ";
    cin >> num;

    int hr = num/60;
    int min = num % 60;

    cout << hr << " hour " << min<< " min";
    return 0;
}