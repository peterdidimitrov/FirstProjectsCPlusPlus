#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int hourOfExam, mitutesOfExam, hourOfArrived, mitutesOfArrived;
    cin >> hourOfExam >> mitutesOfExam >> hourOfArrived >> mitutesOfArrived;

    int totalMinutes = (hourOfExam * 60 + mitutesOfExam) -
        (hourOfArrived * 60 + mitutesOfArrived);

    int mimutes = totalMinutes % 60;
    int hours = totalMinutes / 60;

    if (totalMinutes < 0)
    {
        cout << "Late" << endl;
        mimutes = abs(mimutes);
        hours = abs(hours);

        if (hours == 0)
        {
            cout << mimutes << " minutes after the start" << endl;
        }
        else
        {
            if (mimutes >= 10)
            {
                cout << hours << ":" << mimutes <<
                    " hours after the start" << endl;
            }
            else
            {
                cout << hours << ":0" << mimutes <<
                    " hours after the start" << endl;
            }
        }
    }
    else if (totalMinutes >= 0 && totalMinutes <= 30)
    {
        if (totalMinutes == 0)
        {
            cout << "On time" << endl;
        }
        else
        {
            cout << "On time" << endl;
            cout << mimutes << " minutes before the start" << endl;
        }
    }
    else if (totalMinutes > 30)
    {
        cout << "Early" << endl;
        if (hours == 0)
        {
            cout << mimutes << " minutes before the start" << endl;
        }
        else
        {
            if (mimutes >= 10)
            {
                cout << hours << ":" << mimutes <<
                    " hours before the start" << endl;
            }
            else
            {
                cout << hours << ":0" << mimutes <<
                    " hours before the start" << endl;
            }
        }
    }
    return 0;
}