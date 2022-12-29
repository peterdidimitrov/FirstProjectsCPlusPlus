#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int age;
    cin >> age;
    double priceForWashingMachine;
    cin >> priceForWashingMachine;
    int priceForToy;
    cin >> priceForToy;
    int counter = 0;
    int counterToys = 0;

    double totalMoney = 0;

    for (int i = 1; i <= age; i++)
    {
        if (i % 2 == 0)
        {
            counter++;
            totalMoney += (10 * counter) - 1;
        }
        else
        {
            counterToys++;
        }
    }

    int totalMoneyFromToys = priceForToy * counterToys;
    totalMoney += totalMoneyFromToys;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalMoney >= priceForWashingMachine)
    {
        cout << "Yes! " << totalMoney - priceForWashingMachine << endl;
    }
    else
    {
        cout << "No! " << priceForWashingMachine - totalMoney << endl;
    }
    return 0;
}