#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    string filmName;
    getline(cin, filmName);
    int filmDuration;
    cin >> filmDuration;
    int lunchDuration;
    cin >> lunchDuration;

    double lunchTime = lunchDuration / 8.00;
    double restTime = lunchDuration / 4.00;

    double totalTime = filmDuration + lunchTime + restTime;

    if (totalTime > lunchDuration)
    {
        double diff = totalTime - lunchDuration;
        cout << "You don't have enough time to watch " << filmName <<
            ", you need " << ceil(diff) << " more minutes." << endl;
    }
    else
    {
        double diff = lunchDuration - totalTime;
        cout << "You have enough time to watch " << filmName <<
            " and left with " << ceil(diff) << " minutes free time." << endl;
    }

    return 0;
}