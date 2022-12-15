#include <iostream>

using namespace std;

int main()
{
    string name;
    cin >> name;
    int projectCount;
    cin >> projectCount;
    int sum = projectCount * 3;


    cout << "The architect " << name << " will need " << sum << " hours to complete " << projectCount << " project/s." << endl;
    return 0;
}