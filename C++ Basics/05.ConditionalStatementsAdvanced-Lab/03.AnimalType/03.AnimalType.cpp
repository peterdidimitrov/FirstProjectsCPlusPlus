#include <iostream>
#include <string>
using namespace std;

int main()
{
    string animal;
    getline(cin, animal);

    if (animal == "crocodile" || animal == "tortoise" ||
        animal == "snake")
    {
        cout << "reptile" << endl;
    }
    else if (animal == "dog")
    {
        cout << "mammal" << endl;
    }
    else
    {
        cout << "unknown" << endl;
    }

    return 0;
}