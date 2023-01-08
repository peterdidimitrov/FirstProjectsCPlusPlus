#include <iostream>

using namespace std;

int main()
{
    double neededMoney, ownedMoney;
    cin >> neededMoney >> ownedMoney;

    int spentCounter = 0;
    int daysCounter = 0;

    while (ownedMoney < neededMoney && spentCounter < 5)
    {
        string command;
        cin >> command;

        double currentMoney;
        cin >> currentMoney;

        if (command == "spend")
        {
            ownedMoney -= currentMoney;
            spentCounter++;
        }
        else if (command == "save")
        {
            ownedMoney += currentMoney;
            spentCounter = 0;
        }

        if (ownedMoney < 0)
        {
            ownedMoney = 0;
        }

        daysCounter++;
    }

    if (spentCounter == 5)
    {
        cout << "You can't save the money." << endl;
        cout << daysCounter << endl;
    }

    if (ownedMoney >= neededMoney)
    {
        cout << "You saved the money for " << daysCounter << " days.";
    }

    return 0;
}