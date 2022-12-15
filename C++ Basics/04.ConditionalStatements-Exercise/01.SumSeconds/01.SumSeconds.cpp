#include <iostream>

using namespace std;

int main()
{
    int first;
    cin >> first;
    int second;
    cin >> second;
    int third;
    cin >> third;

    int totalTime = first + second + third;
    int seconds = totalTime % 60;
    int minutes = totalTime / 60;

    if (seconds < 10)
    {
        cout << minutes << ":0" << seconds << endl;
    }
    else
    {
        cout << minutes << ":" << seconds << endl;
    }

    return 0;
}