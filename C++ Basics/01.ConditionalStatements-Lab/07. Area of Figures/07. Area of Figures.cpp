#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
    string type;
    cin >> type;
    double area = 0;

    if (type == "square")
    {
        double side;
        cin >> side;

        area = side * side;
    }
    else if (type == "rectangle")
    {
        double sideA;
        cin >> sideA;
        double sideB;
        cin >> sideB;

        area = sideA * sideB;
    }
    else if (type == "circle")
    {
        double radius;
        cin >> radius;

        area = M_PI * pow(radius, 2);
    }
    else if (type == "triangle")
    {
        double side;
        cin >> side;
        double higth;
        cin >> higth;

        area = 0.5 * side * higth;
    }

    cout.setf(ios::fixed);
    cout.precision(3);

    cout << area << endl;

    return 0;
}