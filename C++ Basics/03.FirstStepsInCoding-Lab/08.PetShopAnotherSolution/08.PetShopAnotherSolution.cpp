#include <iostream>

using namespace std;

int main()
{
    double dogFoodPrice = 2.5;
    int othersFoodPrice = 4;
    int dog;
    cin >> dog;
    int others;
    cin >> others;
    double sum = dog * dogFoodPrice + others * othersFoodPrice;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << sum << " lv." << endl;

    return 0;
}