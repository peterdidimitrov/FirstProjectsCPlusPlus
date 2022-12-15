#include <iostream>

using namespace std;

int main()
{
    double price = 1.79549;

    double inputAmount;
    cin >> inputAmount;

    double sum = inputAmount * price;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << sum << endl;

    return 0;
}