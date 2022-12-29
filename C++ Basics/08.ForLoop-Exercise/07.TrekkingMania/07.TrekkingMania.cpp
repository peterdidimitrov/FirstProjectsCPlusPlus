#include <iostream>
#include <string>
using namespace std;

int main()
{
    int countOfGroups;
    cin >> countOfGroups;

    int totalPeople = 0;

    int counterMusala = 0;
    int counterMonblan = 0;
    int counterKilimanjaro = 0;
    int counterK2 = 0;
    int counterEverest = 0;

    for (int i = 1; i <= countOfGroups; i++)
    {
        int countOfPeople;
        cin >> countOfPeople;

        totalPeople += countOfPeople;

        if (countOfPeople <= 5)
        {
            counterMusala += countOfPeople;
        }
        else if (countOfPeople >= 6 && countOfPeople <= 12)
        {
            counterMonblan += countOfPeople;
        }
        else if (countOfPeople >= 13 && countOfPeople <= 25)
        {
            counterKilimanjaro += countOfPeople;
        }
        else if (countOfPeople >= 26 && countOfPeople <= 40)
        {
            counterK2 += countOfPeople;
        }
        else if (countOfPeople >= 41)
        {
            counterEverest += countOfPeople;
        }
    }

    double persentMusala = (counterMusala * 1.00 / totalPeople) * 100;
    double persentMonblan = (counterMonblan * 1.00 / totalPeople) * 100;
    double persentKilimanjaro = (counterKilimanjaro * 1.00 / totalPeople) * 100;
    double persentK2 = (counterK2 * 1.00 / totalPeople) * 100;
    double persentEverest = (counterEverest * 1.00 / totalPeople) * 100;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << persentMusala << "%" << endl;
    cout << persentMonblan << "%" << endl;
    cout << persentKilimanjaro << "%" << endl;
    cout << persentK2 << "%" << endl;
    cout << persentEverest << "%" << endl;

    return 0;
}