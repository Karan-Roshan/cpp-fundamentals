// Swapping two number without third variable
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    a = a+b;
    b = a-b;
    a= a-b;

    cout << "After swapping two number:" << endl;
    cout << "a = " << a << " b = " << b;
    return 0;
}