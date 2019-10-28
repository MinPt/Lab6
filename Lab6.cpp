#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,x;
    float Y;
    int HowMany = 0;
    setlocale(0, "");
    cout << "Endter x" << endl;
    cin >> x;
    for (i = 1; i <= 9; i++) {
        HowMany = HowMany + pow(i,3);
    };
    Y = (log(HowMany) + 3*pow(sin(x),2))/(x*x + 5);
    cout << "Y = " << Y << endl;
    system("pause");
    return 0;
}
