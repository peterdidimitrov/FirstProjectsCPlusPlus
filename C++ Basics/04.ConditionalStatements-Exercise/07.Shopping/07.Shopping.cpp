#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    double budget;
    cin >> budget;
    int videocarts;
    cin >> videocarts;
    int procesors;
    cin >> procesors;
    int ram;
    cin >> ram;

    double videocartsPrice = videocarts * 250.00;

    double sum = videocartsPrice + (videocartsPrice * 0.35) * procesors
        + (videocartsPrice * 0.10) * ram;

    if (videocarts > procesors)
    {
        sum *= 0.85;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (budget < sum)
    {
        double diff = sum - budget;
        cout << "Not enough money! You need " << diff << " leva more!" << endl;
    }
    else
    {
        double diff = budget - sum;
        cout << "You have " << diff << " leva left!" << endl;
    }

    return 0;
}