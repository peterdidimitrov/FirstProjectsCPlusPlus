#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    double budget;
    cin >> budget;
    int statists;
    cin >> statists;
    double priceForClothes;
    cin >> priceForClothes;

    priceForClothes *= statists;
    if (statists > 150)
    {
        priceForClothes *= 0.90;
    }

    double totalOutcomes = priceForClothes + budget * 0.10;

    cout.setf(ios::fixed);
    cout.precision(2);
    if (totalOutcomes <= budget)
    {
        double diff = budget - totalOutcomes;
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << diff << " leva left." << endl;
    }
    else
    {
        double diff = totalOutcomes - budget;
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << diff << " leva more." << endl;
    }

    return 0;
}