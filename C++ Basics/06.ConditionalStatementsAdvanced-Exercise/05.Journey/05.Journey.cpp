#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double budget;
    cin >> budget;

    string season;
    cin >> season;

    string destination;
    string type;

    double totalSum;

    if (budget <= 100)
    {
        destination = "Bulgaria";
        if (season == "summer")
        {
            totalSum = budget * 0.30;
            type = "Camp";
        }
        else if (season == "winter")
        {
            totalSum = budget * 0.70;
            type = "Hotel";
        }
    }
    else if (budget > 100 && budget <= 1000)
    {
        destination = "Balkans";
        if (season == "summer")
        {
            totalSum = budget * 0.40;
            type = "Camp";
        }
        else if (season == "winter")
        {
            totalSum = budget * 0.80;
            type = "Hotel";
        }
    }
    else if (budget > 1000)
    {
        totalSum = budget * 0.90;
        destination = "Europe";
        type = "Hotel";
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Somewhere in " << destination << endl;
    cout << type << " - " << totalSum << endl;

    return 0;
}
