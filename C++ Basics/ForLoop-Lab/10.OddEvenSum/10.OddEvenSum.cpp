#include <iostream>
using namespace std;

int main()
{
    int count;
    cin >> count;

    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < count; i++)
    {
        int number;
        cin >> number;
        if (i % 2 == 0)
        {
            evenSum += number;
        }
        else
        {
            oddSum += number;
        }
    }
    if (evenSum == oddSum)
    {
        cout << "Yes" << endl;
        cout << "Sum = " << evenSum << endl;
    }
    else
    {
        int diff = abs(evenSum - oddSum);
        cout << "No" << endl;
        cout << "Diff = " << diff << endl;
    }

    return 0;
}