#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    double bonus = 0;


    if (num % 2 == 0)
    {
        bonus++;
    }
    if (num % 10 == 5)
    {
        bonus += 2;
    }
    if (num <= 100)
    {
        bonus += 5;
    }
    else if (num > 100 && num <= 1000)
    {
        bonus += num * 0.20;
    }
    else if (num > 1000)
    {
        bonus += num * 0.10;
    }
    double totalPoints = bonus + num;

    cout << bonus << endl;
    cout << totalPoints << endl;

    return 0;
}