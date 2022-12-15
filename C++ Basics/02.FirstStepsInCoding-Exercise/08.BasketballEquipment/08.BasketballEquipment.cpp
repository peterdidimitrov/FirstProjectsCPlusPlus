#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int tax;
    cin >> tax;

    double shoes = tax * 0.60;
    double clothes = shoes * 0.80;
    double ball = clothes / 4.0;
    double others = ball / 5.0;

    double sum = tax * 1.0 + shoes + clothes + ball + others;

    cout << sum << endl;

    return 0;
}