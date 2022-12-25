#include <iostream>
#include <string>
using namespace std;

int main()
{
    string days, typeOfRoom, assessment;

    getline(cin, days);

    int nights = stoi(days) - 1;

    getline(cin, typeOfRoom);
    getline(cin, assessment);

    double totalSum;

    if (typeOfRoom == "room for one person")
    {
        totalSum = nights * 18;
    }
    else if (typeOfRoom == "apartment")
    {
        if (nights < 10)
        {
            totalSum = (nights * 25) * 0.70;
        }
        else if (nights >= 10 && nights <= 15)
        {
            totalSum = (nights * 25) * 0.65;
        }
        else if (nights > 15)
        {
            totalSum = (nights * 25) * 0.50;
        }
    }
    else if (typeOfRoom == "president apartment")
    {
        if (nights < 10)
        {
            totalSum = (nights * 35) * 0.90;
        }
        else if (nights >= 10 && nights <= 15)
        {
            totalSum = (nights * 35) * 0.85;
        }
        else if (nights > 15)
        {
            totalSum = (nights * 35) * 0.80;
        }
    }

    if (assessment == "positive")
    {
        totalSum *= 1.25;
    }
    else
    {
        totalSum *= 0.90;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalSum << endl;

    return 0;
}