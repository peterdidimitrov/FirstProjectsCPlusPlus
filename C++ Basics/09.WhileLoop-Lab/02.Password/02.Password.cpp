#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, pass;
    cin >> name >> pass;

    string input;
    cin >> input;

    while (input != pass)
    {
        cin >> input;
    }
    cout << "Welcome " << name << "!" << endl;
    return 0;
}