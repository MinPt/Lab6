#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,x;
    float Y;
    int IDIDIT = 0;
    setlocale(0, "");
    cout << "Endter x" << endl;
    cin >> x;
    for (i = 1; i <= 6; i++) {
        IDIDIT = IDIDIT + pow(i,3);
    };
    Y = (log(IDIDIT) + 2*pow(sin(x),2))/(x*x + 5);
    cout << "Y = " << Y << endl;
    system("pause");
    return 0;
}
