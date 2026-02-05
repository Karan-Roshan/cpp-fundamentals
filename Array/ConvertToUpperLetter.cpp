//replace all the lower-case letters in a given string with the corresponding capital letters.
#include <iostream>
using namespace std;

int main()
{
    char str[] = "Karan Roshan";
    string new_str;

    cout << "The uppar version of " << str << " is ";
    for (int i = 0; i < strlen(str); i++)
    {
        new_str = toupper(str[i]);
        cout << new_str;
    }
    return 0;
}