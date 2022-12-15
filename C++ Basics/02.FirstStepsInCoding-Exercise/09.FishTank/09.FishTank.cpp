#include <iostream>

using namespace std;

int main()
{
    int length;
    cin >> length;

    int width;
    cin >> width;

    int higth;
    cin >> higth;

    double percent;
    cin >> percent;

    double volume = (length * width * higth) / 1000.00;
    double litters = volume * (1 - (percent / 100.00));

    cout << litters << endl;

    return 0;
}