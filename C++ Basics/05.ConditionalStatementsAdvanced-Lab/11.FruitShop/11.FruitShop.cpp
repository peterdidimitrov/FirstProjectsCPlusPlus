#include <iostream>
#include <string>
using namespace std;

int main()
{
    string product, day;
    cin >> product >> day;
    double quantity;
    cin >> quantity;
    double totalSum;
    bool isInvalidDay = false;
    bool isInvalidProduct = false;

    if (day == "Saturday" || day == "Sunday")
    {
        if (product == "banana")
        {
            totalSum = quantity * 2.70;
        }
        else if (product == "apple")
        {
            totalSum = quantity * 1.25;
        }
        else if (product == "orange")
        {
            totalSum = quantity * 0.90;
        }
        else if (product == "grapefruit")
        {
            totalSum = quantity * 1.60;
        }
        else if (product == "kiwi")
        {
            totalSum = quantity * 3.00;
        }
        else if (product == "pineapple")
        {
            totalSum = quantity * 5.60;
        }
        else if (product == "grapes")
        {
            totalSum = quantity * 4.20;
        }
        else
        {
            isInvalidProduct = true;
        }
    }
    else if (day == "Monday" || day == "Tuesday" ||
        day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if (product == "banana")
        {
            totalSum = quantity * 2.50;
        }
        else if (product == "apple")
        {
            totalSum = quantity * 1.20;
        }
        else if (product == "orange")
        {
            totalSum = quantity * 0.85;
        }
        else if (product == "grapefruit")
        {
            totalSum = quantity * 1.45;
        }
        else if (product == "kiwi")
        {
            totalSum = quantity * 2.70;
        }
        else if (product == "pineapple")
        {
            totalSum = quantity * 5.50;
        }
        else if (product == "grapes")
        {
            totalSum = quantity * 3.85;
        }
        else
        {
            isInvalidProduct = true;
        }
    }
    else
    {
        isInvalidDay = true;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (isInvalidDay == false && isInvalidProduct == false)
    {
        cout << totalSum << endl;
    }
    else
    {
        cout << "error" << endl;
    }

    return 0;
}