#include <iostream>
#include <string>
using namespace std;

int main()
{
    string actorName, points, countOfJurry;
    getline(cin, actorName);

    getline(cin, points);
    double academyPoints = stod(points);

    getline(cin, countOfJurry);
    int n = stoi(countOfJurry);

    double totalPoints = academyPoints;

    for (int i = 1; i <= n; i++)
    {
        if (totalPoints > 1250.5)
        {
            cout.setf(ios::fixed);
            cout.precision(1);
            continue;
        }
        string name, currPointsStr;
        getline(cin, name);
        getline(cin, currPointsStr);
        double currPoints = stod(currPointsStr);

        totalPoints += ((name.length() * currPoints) / 2);
    }
    cout.setf(ios::fixed);
    cout.precision(1);

    if (totalPoints <= 1250.5)
    {
        cout << "Sorry, " << actorName << " you need "
            << 1250.5 - totalPoints << " more!" << endl;
    }
    else
    {
        cout << "Congratulations, "
            << actorName << " got a nominee for leading role with " << totalPoints
            << "!" << endl;
    }
    return 0;
}