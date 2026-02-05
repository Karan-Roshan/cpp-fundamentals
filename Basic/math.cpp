// Max
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 9;
    cout << max(a,b);
    return 0;
}

// Min
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 9;
    cout << min(a,b);
    return 0;
}

/*Other functions, such as sqrt (square root), round (rounds a number) and log (natural logarithm),
can be found in the <cmath> header file:*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << sqrt(9) << "\n";
    cout << log(2) << "\n";
    cout << round(3.872) << "\n";
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Square root of 64 is: " << sqrt(64) << "\n";
    cout << "Round 2.6 to the nearest integer: " << round(2.6) << "\n";
    cout << "The natural logarithm of 2 is: " << log(2) << "\n";
    return 0;
}