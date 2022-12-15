#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double deposit;
    cin >> deposit;

    int period;
    cin >> period;

    double persent;
    cin >> persent;

    double sum = deposit + (period * ((deposit * persent / 100) / 12));

    cout << sum << endl;

    return 0;
}