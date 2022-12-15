#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
    double radians;
    cin >> radians;

    double degree = radians * 180 / M_PI;

    cout << round(degree) << endl;

    return 0;
}