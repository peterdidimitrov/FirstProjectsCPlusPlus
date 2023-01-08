#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    cin >> input;

    double sum = 0;

    cout.setf(ios::fixed);
    cout.precision(2);

    while (input != "NoMoreMoney")
    {
        double money = stod(input);

        if (money < 0)
        {
            cout << "Invalid operation!" << endl;
            break;
        }
        sum += money;

        cout << "Increase: " << money << endl;

        cin >> input;
    }

    cout << "Total: " << sum << endl;

    return 0;
}