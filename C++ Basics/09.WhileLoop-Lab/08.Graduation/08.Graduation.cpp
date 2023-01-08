#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main()
{
    string name;
    cin >> name;

    double grade;
    cin >> grade;

    int gradeCounter = 0;
    double sumGrades = 0;
    int failCounter = 0;

    cout.setf(ios::fixed);
    cout.precision(2);

    while (true)
    {
        sumGrades += grade;
        gradeCounter++;
        if (grade < 4.00)
        {
            failCounter++;

            cout << name << " has been excluded at "
                << gradeCounter << " grade" << endl;
            break;
        }
        if (gradeCounter == 12)
        {
            break;
        }

        cin >> grade;
    }

    double avg = sumGrades / gradeCounter;

    if (gradeCounter == 12)
    {
        cout << name << " graduated. Average grade: " << avg << endl;
    }
    return 0;
}