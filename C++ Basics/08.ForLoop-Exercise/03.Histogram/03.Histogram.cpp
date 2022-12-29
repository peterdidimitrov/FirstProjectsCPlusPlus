#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p1Count = 0;
    int p1Sum = 0;

    int p2Count = 0;
    int p2Sum = 0;

    int p3Count = 0;
    int p3Sum = 0;

    int p4Count = 0;
    int p4Sum = 0;

    int p5Count = 0;
    int p5Sum = 0;


    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;

        if (number < 200)
        {
            p1Count++;
            p1Sum += number;
        }
        else if (number >= 200 && number <= 399)
        {
            p2Count++;
            p2Sum += number;
        }
        else if (number >= 400 && number <= 599)
        {
            p3Count++;
            p3Sum += number;
        }
        else if (number >= 600 && number <= 799)
        {
            p4Count++;
            p4Sum += number;
        }
        else if (number >= 800)
        {
            p5Count++;
            p5Sum += number;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    double p1 = p1Count * 1.00 / n * 100;
    double p2 = p2Count * 1.00 / n * 100;
    double p3 = p3Count * 1.00 / n * 100;
    double p4 = p4Count * 1.00 / n * 100;
    double p5 = p5Count * 1.00 / n * 100;


    cout << p1 << "%" << endl;
    cout << p2 << "%" << endl;
    cout << p3 << "%" << endl;
    cout << p4 << "%" << endl;
    cout << p5 << "%" << endl;

    return 0;
}