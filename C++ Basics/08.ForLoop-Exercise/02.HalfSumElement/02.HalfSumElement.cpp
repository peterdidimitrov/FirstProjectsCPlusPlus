#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;

        sum += number;
        if (number > max)
        {
            max = number;
        }
    }

    int sumWithoutMax = sum - max;

    if (max == sumWithoutMax)
    {
        cout << "Yes" << endl;
        cout << "Sum = " << sumWithoutMax << endl;
    }
    else
    {
        int diff = abs(max - sumWithoutMax);
        cout << "No" << endl;
        cout << "Diff = " << diff << endl;
    }

    return 0;
}