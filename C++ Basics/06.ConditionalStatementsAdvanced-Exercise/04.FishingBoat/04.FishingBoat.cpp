#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double budget;
    cin >> budget;

    string season;
    cin >> season;

    int fishmenCount;
    cin >> fishmenCount;

    double totalSum;


    if (season == "Spring")
    {
        if (fishmenCount <= 6)
        {
            totalSum = 3000 * 0.90;
        }
        else if (fishmenCount > 6 && fishmenCount <= 11)
        {
            totalSum = 3000 * 0.85;
        }
        else if (fishmenCount >= 12)
        {
            totalSum = 3000 * 0.75;
        }
    }
    else if (season == "Summer" || season == "Autumn")
    {
        if (fishmenCount <= 6)
        {
            totalSum = 4200 * 0.90;
        }
        else if (fishmenCount > 6 && fishmenCount <= 11)
        {
            totalSum = 4200 * 0.85;
        }
        else if (fishmenCount >= 12)
        {
            totalSum = 4200 * 0.75;
        }
    }
    else if (season == "Winter")
    {
        if (fishmenCount <= 6)
        {
            totalSum = 2600 * 0.90;
        }
        else if (fishmenCount > 6 && fishmenCount <= 11)
        {
            totalSum = 2600 * 0.85;
        }
        else if (fishmenCount >= 12)
        {
            totalSum = 2600 * 0.75;
        }
    }
    if (fishmenCount % 2 == 0 && season != "Autumn")
    {
        totalSum *= 0.95;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    budget -= totalSum;

    if (budget >= 0)
    {
        cout << "Yes! You have " << budget << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money! You need " << abs(budget) << " leva." << endl;
    }


    return 0;
}
