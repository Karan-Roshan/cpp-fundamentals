// Input an alphabet and check whether it is vowel or consonant
#include <iostream>
using namespace std;

int main()
{
    char ch;
    int i;
    cout << "Enter alphabet: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        i = 1;
    }
    else
    {
        i = 0;
    }

    switch (i)
    {
    case 1:
        cout << "Vowel";
        break;

    case 0:
        cout << "Consonant";
        break;
    }
    return 0;
}