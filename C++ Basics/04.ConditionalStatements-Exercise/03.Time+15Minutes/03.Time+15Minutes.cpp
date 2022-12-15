#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    int hour;
    cin >> hour;
    int minutes;
    cin >> minutes;

    int totalMin = minutes + 15 + (hour * 60);
    int endHour = totalMin / 60;
    int endMin = totalMin % 60;

    if (endHour > 23)
    {
        endHour = 0;
    }
    if (endMin < 9)
    {
        cout << endHour << ":0" << endMin << endl;
    }
    else
    {
        cout << endHour << ":" << endMin << endl;
    }

    return 0;
}