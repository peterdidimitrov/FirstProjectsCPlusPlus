#include <iostream>
using namespace std;

int main()
{
    int firstNum;
    cin >> firstNum;

    int secondNum;
    cin >> secondNum;

    char operatorChar;
    cin >> operatorChar;

    double totalSum;
    string evenOrOdd;

    if (operatorChar == '+')
    {
        totalSum = firstNum + secondNum;
        if ((int)totalSum % 2 == 0)
        {
            evenOrOdd = "even";
        }
        else
        {
            evenOrOdd = "odd";
        }
        cout << firstNum << " " << operatorChar
            << " " << secondNum << " = " << totalSum << " - " << evenOrOdd << endl;
    }
    else if (operatorChar == '-')
    {
        totalSum = firstNum - secondNum;
        if ((int)totalSum % 2 == 0)
        {
            evenOrOdd = "even";
        }
        else
        {
            evenOrOdd = "odd";
        }
        cout << firstNum << " " << operatorChar
            << " " << secondNum << " = " << totalSum << " - " << evenOrOdd << endl;
    }
    else if (operatorChar == '*')
    {
        totalSum = firstNum * secondNum;
        if ((int)totalSum % 2 == 0)
        {
            evenOrOdd = "even";
        }
        else
        {
            evenOrOdd = "odd";
        }
        cout << firstNum << " " << operatorChar
            << " " << secondNum << " = " << totalSum << " - " << evenOrOdd << endl;
    }
    else if (operatorChar == '/')
    {
        cout.setf(ios::fixed);
        cout.precision(2);
        if (secondNum == 0)
        {
            cout << "Cannot divide " << firstNum << " by zero" << endl;
        }
        else
        {
            totalSum = firstNum / (1.00 * secondNum);
            cout << firstNum << " " << operatorChar
                << " " << secondNum << " = " << totalSum << endl;
        }
    }
    else if (operatorChar == '%')
    {
        if (secondNum == 0)
        {
            cout << "Cannot divide " << firstNum << " by zero" << endl;
        }
        else
        {
            totalSum = firstNum % secondNum;
            cout << firstNum << " " << operatorChar
                << " " << secondNum << " = " << totalSum << endl;
        }
    }
    return 0;
}
