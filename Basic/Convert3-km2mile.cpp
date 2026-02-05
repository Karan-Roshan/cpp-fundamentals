//Convert km/hr to mile/hr
#include <iostream>
using namespace std;

int main() {
    float_t dist;
    cout << "Enter distance in kilometer: ";
    cin >> dist;

    float mile = dist * 0.621371;
    cout << "Distance in mile/hr: " << mile << " miles/hr";
    return 0;
}