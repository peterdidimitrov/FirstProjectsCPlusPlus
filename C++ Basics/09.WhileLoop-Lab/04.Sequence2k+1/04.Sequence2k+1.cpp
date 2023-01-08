#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = 1;

    while (k <= n)
    {
        cout << k << endl;
        k = k * 2 + 1;
    }
    return 0;
}