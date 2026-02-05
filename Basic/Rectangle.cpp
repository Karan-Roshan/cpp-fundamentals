// print the area and perimeter of the rectangle
#include <iostream>
using namespace std;

int main()
{
    int l, b;
    cout << "Enter length(l) of the rectangle: ";
    cin >> l;
    cout << "Enter breadth(b) of the rectangle: ";
    cin >> b;

    float area = l * b;
    float perimeter = 2 * (l + b);

    cout << "Area of the reactangle: " << area << endl;
    cout << "Perimeter of the reactangle: " << perimeter << endl;
    return 0;
}