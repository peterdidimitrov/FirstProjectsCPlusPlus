#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int nylon;
    cin >> nylon;

    int paint;
    cin >> paint;

    int thinner;
    cin >> thinner;

    int hours;
    cin >> hours;

    double sumOfSupplies = (nylon + 2) * 1.50
        + ((paint + (paint * 0.10)) * 14.50) + (thinner * 5.00) + 0.40;
    double priceForRepare = (sumOfSupplies * 0.30) * hours;
    double totalSum = sumOfSupplies + priceForRepare;

    cout << totalSum << endl;

    return 0;
}