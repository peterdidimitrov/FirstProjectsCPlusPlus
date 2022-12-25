#include <iostream>
using namespace std;

int main()
{
    string month;
    cin >> month;

    int nights;
    cin >> nights;

    double totalPriceForApartment;
    double totalPriceForStudio;

    if (month == "May" || month == "October")
    {
        totalPriceForStudio = nights * 50.00;
        totalPriceForApartment = nights * 65.00;

        if (nights > 7 && nights <= 14)
        {
            totalPriceForStudio *= 0.95;
        }
        else if (nights > 14)
        {
            totalPriceForStudio *= 0.70;
            totalPriceForApartment *= 0.90;
        }
    }
    else if (month == "June" || month == "September")
    {
        totalPriceForStudio = nights * 75.20;
        totalPriceForApartment = nights * 68.70;

        if (nights > 14)
        {
            totalPriceForStudio *= 0.80;
            totalPriceForApartment *= 0.90;
        }
    }
    else if (month == "July" || month == "August")
    {
        totalPriceForStudio = nights * 76.00;
        totalPriceForApartment = nights * 77.00;

        if (nights > 14)
        {
            totalPriceForApartment *= 0.90;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Apartment: " << totalPriceForApartment << " lv." << endl;
    cout << "Studio: " << totalPriceForStudio << " lv." << endl;

    return 0;
}
