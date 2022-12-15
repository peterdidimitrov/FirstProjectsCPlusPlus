#include <iostream>

using namespace std;

int main()
{
    double workPriceForOne = 7.61;
    int discountPersent = 18;
    double area;
    cin >> area;

    double sum = (area * workPriceForOne) * (100 - discountPersent) / 100;
    double discount = (area * workPriceForOne) - sum;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The final price is: " << sum << " lv." << endl;
    cout << "The discount is: " << discount << " lv." << endl;

    return 0;
}