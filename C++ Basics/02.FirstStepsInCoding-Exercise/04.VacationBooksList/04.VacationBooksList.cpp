#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int pages;
    cin >> pages;

    int pagesPerHour;
    cin >> pagesPerHour;

    int days;
    cin >> days;

    int totalHours = (pages / pagesPerHour) / days;

    cout << totalHours << endl;

    return 0;
}