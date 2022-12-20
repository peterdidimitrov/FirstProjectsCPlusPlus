#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    double tripPrice;
    cin >> tripPrice;
    int puzels;
    cin >> puzzels;
    int dolls;
    cin >> dolls;
    int bears;
    cin >> bears;
    int minions;
    cin >> minions;
    int trucks;
    cin >> trucks;

    int totalToys = puzels + dolls + bears + minions + trucks;

    double totalIncomes = puzels * 2.60 + dolls * 3
        + bears * 4.10 + minions * 8.20 + trucks * 2;

    if (totalToys >= 50)
    {
        totalIncomes *= 0.75;
    }

    totalIncomes *= 0.90;
    cout.setf(ios::fixed);
    cout.precision(2);
    if (totalIncomes >= tripPrice)
    {
        double diff = totalIncomes - tripPrice;
        cout << "Yes! " << diff << " lv left." << endl;
    }
    else
    {
        double diff = tripPrice - totalIncomes;
        cout << "Not enough money! " << diff << " lv needed." << endl;
    }

    return 0;
}