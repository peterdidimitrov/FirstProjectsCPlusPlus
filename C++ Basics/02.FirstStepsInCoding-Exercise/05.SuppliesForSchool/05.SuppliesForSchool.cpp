#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int pencils;
    cin >> pencils;

    int markers;
    cin >> markers;

    double preparation;
    cin >> preparation;

    int discount;
    cin >> discount;

    double sum = ((pencils * 5.80) + (markers * 7.20) + (preparation * 1.20)) * ((100 - discount) / 100.00);

    cout << sum << endl;

    return 0;
}