#include <iostream>
using namespace std;

int main()
{
    int count;
    cin >> count;

    int leftSum = 0;
    int rightSum = 0;

    for (int i = 0; i < count; i++)
    {
        int number;
        cin >> number;
        leftSum += number;
    }
    for (int i = 0; i < count; i++)
    {
        int number;
        cin >> number;
        rightSum += number;
    }

    if (leftSum == rightSum)
    {
        cout << "Yes, sum = " << leftSum << endl;
    }
    else
    {
        int diff = abs(leftSum - rightSum);
        cout << "No, diff = " << diff << endl;
    }

    return 0;
}