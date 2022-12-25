#include <iostream>
#include <string>
using namespace std;

int main()
{
    string town;
    cin >> town;
    double sales;
    cin >> sales;

    bool isInvalidTown = false;
    bool isInvalidCommission = false;

    double commission;

    if (town == "Sofia")
    {
        if (sales >= 0 && sales <= 500)
        {
            commission = sales * 0.05;
        }
        else if (sales > 500 && sales <= 1000)
        {
            commission = sales * 0.07;
        }
        else if (sales > 1000 && sales <= 10000)
        {
            commission = sales * 0.08;
        }
        else if (sales > 10000)
        {
            commission = sales * 0.12;
        }
        else
        {
            isInvalidCommission = true;
        }
    }
    else if (town == "Plovdiv")
    {
        if (sales >= 0 && sales <= 500)
        {
            commission = sales * 0.055;
        }
        else if (sales > 500 && sales <= 1000)
        {
            commission = sales * 0.08;
        }
        else if (sales > 1000 && sales <= 10000)
        {
            commission = sales * 0.12;
        }
        else if (sales > 10000)
        {
            commission = sales * 0.145;
        }
        else
        {
            isInvalidCommission = true;
        }
    }
    else if (town == "Varna")
    {
        if (sales >= 0 && sales <= 500)
        {
            commission = sales * 0.045;
        }
        else if (sales > 500 && sales <= 1000)
        {
            commission = sales * 0.075;
        }
        else if (sales > 1000 && sales <= 10000)
        {
            commission = sales * 0.10;
        }
        else if (sales > 10000)
        {
            commission = sales * 0.13;
        }
        else
        {
            isInvalidCommission = true;
        }
    }
    else
    {
        isInvalidTown = true;
    }
    cout.setf(ios::fixed);
    cout.precision(2);

    if (isInvalidTown == false && isInvalidCommission == false)
    {
        cout << commission << endl;
    }
    else
    {
        cout << "error" << endl;
    }
}
