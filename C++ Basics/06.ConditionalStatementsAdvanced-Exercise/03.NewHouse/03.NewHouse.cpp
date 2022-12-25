#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string typeFlower;
    cin >> typeFlower;

    int count;
    cin >> count;

    double budget;
    cin >> budget;

    double totalSum;


    if (typeFlower == "Roses")
    {
        if (count > 80)
        {
            totalSum = (count * 5) * 0.90;
        }
        else
        {
            totalSum = count * 5;
        }
    }
    else if (typeFlower == "Dahlias")
    {
        if (count > 90)
        {
            totalSum = (count * 3.80) * 0.85;
        }
        else
        {
            totalSum = count * 3.80;
        }
    }
    else if (typeFlower == "Tulips")
    {
        if (count > 80)
        {
            totalSum = (count * 2.80) * 0.85;
        }
        else
        {
            totalSum = count * 2.80;
        }
    }
    else if (typeFlower == "Narcissus")
    {
        if (count < 120)
        {
            totalSum = (count * 3) * 1.15;
        }
        else
        {
            totalSum = count * 3;
        }
    }
    else if (typeFlower == "Gladiolus")
    {
        if (count < 80)
        {
            totalSum = (count * 2.50) * 1.20;
        }
        else
        {
            totalSum = count * 2.50;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    budget -= totalSum;

    if (budget >= 0)
    {
        cout << "Hey, you have a great garden with " << count << " "
            << typeFlower << " and " << budget << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money, you need " << abs(budget) << " leva more." << endl;
    }


    return 0;
}
