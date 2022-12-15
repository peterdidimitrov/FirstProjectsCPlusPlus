#include <iostream>

using namespace std;

int main()
{
    double num;
    cin >> num;

    if (num <= 10)
    {
        cout << "slow" << endl;
    }
    else if (num > 10 && num <= 50)
    {
        cout << "average" << endl;
    }
    else if (num > 50 && num <= 150)
    {
        cout << "fast" << endl;
    }
    else if (num > 150 && num <= 1000)
    {
        cout << "ultra fast" << endl;
    }
    else if (num > 1000)
    {
        cout << "extremely fast" << endl;
    }

    return 0;
}