#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int tabs, salary;
    cin >> tabs >> salary;

    for (int i = 1; i <= tabs; i++)
    {
        string currTab;
        cin >> currTab;

        if (currTab == "Facebook")
        {
            salary -= 150;
        }
        else if (currTab == "Instagram")
        {
            salary -= 100;
        }
        else if (currTab == "Reddit")
        {
            salary -= 50;
        }

        if (salary <= 0)
        {
            cout << "You have lost your salary." << endl;
            break;
        }
    }

    if (salary > 0)
    {
        cout << salary << endl;
    }
    return 0;
}