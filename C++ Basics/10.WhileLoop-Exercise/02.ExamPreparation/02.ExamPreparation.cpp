#include <iostream>
#include <string>
using namespace std;

int main()
{
    string gradesCountStr, currentTask, grade;
    getline(cin, gradesCountStr);
    int gradesCount = stoi(gradesCountStr);

    int counter = 0;
    bool isMartinTired = false;
    int sum = 0;
    int counterNegativeGrade = 0;

    getline(cin, currentTask);
    getline(cin, grade);
    string lastTask = "";
    while (currentTask != "Enough")
    {
        int currGrade = stoi(grade);
        counter++;
        lastTask = currentTask;
        if (currGrade <= 4)
        {
            counterNegativeGrade++;
        }

        sum += currGrade;
        if (counterNegativeGrade == gradesCount)
        {
            cout << "You need a break, " << counterNegativeGrade << " poor grades." << endl;
            isMartinTired = true;
            break;
        }

        getline(cin, currentTask);
        getline(cin, grade);
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (!isMartinTired)
    {
        cout << "Average score: " << sum * 1.0 / counter << endl;
        cout << "Number of problems: " << counter << endl;
        cout << "Last problem: " << lastTask << endl;
    }

    return 0;
}