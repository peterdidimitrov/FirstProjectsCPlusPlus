#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    double record;
    cin >> record;
    double distance;
    cin >> distance;
    double timeInSec;
    cin >> timeInSec;

    double delay = floor(distance / 15) * 12.5;
    double totalTime = (distance * timeInSec) + delay;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (record <= totalTime)
    {
        double diff = totalTime - record;
        cout << "No, he failed! He was " << diff << " seconds slower." << endl;
    }
    else
    {
        cout << "Yes, he succeeded! The new world record is "
            << totalTime << " seconds." << endl;
    }

    return 0;
}