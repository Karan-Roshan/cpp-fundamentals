// compute the total and average of four numbers
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    cout << "Enter num3: ";
    cin >> num3;
    cout << "Enter num4: ";
    cin >> num4;

    float total = num1 + num2 + num3 + num4;
    float average = total / 4;

    cout << "The total of four numbers: " << total << endl;
    cout << "The average of four numbers: " << average << endl;
    return 0;
}