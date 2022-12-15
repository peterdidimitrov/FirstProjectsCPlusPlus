#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int chicken;
    cin >> chicken;

    int fish;
    cin >> fish;

    int vege;
    cin >> vege;

    double sum = (chicken * 10.35 + fish * 12.40 + vege * 8.15) +
        (chicken * 10.35 + fish * 12.40 + vege * 8.15) * 0.20 + 2.50;

    cout << sum << endl;

    return 0;
}