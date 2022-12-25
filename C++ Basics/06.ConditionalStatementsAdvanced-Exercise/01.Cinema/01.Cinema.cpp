#include <iostream>

using namespace std;

int main()
{
    string type;
    cin >> type;

    int rows, columns;
    cin >> rows >> columns;

    int totalSits = rows * columns;

    double totalSum;

    if (type == "Premiere")
    {
        totalSum = totalSits * 12.00;
    }
    else if (type == "Normal")
    {
        totalSum = totalSits * 7.50;
    }
    else if (type == "Discount")
    {
        totalSum = totalSits * 5.00;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalSum << " leva";

    return 0;
}
