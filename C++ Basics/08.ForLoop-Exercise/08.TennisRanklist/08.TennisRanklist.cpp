#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int countOfTournaments, startingPoints;
    cin >> countOfTournaments >> startingPoints;

    int totalPoints = startingPoints;
    int counterWinnTournaments = 0;

    for (int i = 1; i <= countOfTournaments; i++)
    {
        string stage;
        cin >> stage;

        if (stage == "W")
        {
            totalPoints += 2000;
            counterWinnTournaments++;
        }
        else if (stage == "F")
        {
            totalPoints += 1200;
        }
        else if (stage == "SF")
        {
            totalPoints += 720;
        }
    }

    double avg = (totalPoints - startingPoints) * 1.00 / countOfTournaments;
    double persent = (counterWinnTournaments * 1.00 / countOfTournaments) * 100;

    cout << "Final points: " << totalPoints << endl;
    cout << "Average points: " << floor(avg) << endl;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << persent << "%" << endl;

    return 0;
}