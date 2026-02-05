// Reverse the string
#include <iostream>
using namespace std;

void reverse_string()
{
    string str = "1234abcd";
    reverse(str.begin(), str.end());
    cout << "Revese the string: " << str;
}

int main()
{
    reverse_string();
    return 0;
}