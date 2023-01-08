#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    while (sum < n)
    {
        int input;
        cin >> input;
        sum += input;
    }
    cout << sum << endl;
    return 0;
}
