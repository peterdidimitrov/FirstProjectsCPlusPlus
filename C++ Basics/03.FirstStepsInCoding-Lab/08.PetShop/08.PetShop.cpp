#include <iostream>

using namespace std;

int main()
{
    double dogFoodPrice = 2.5;
    int othersFoodPrice = 4;
    int dog;
    cin >> dog;
    int others;
    cin >> others;
    double sum = dog * dogFoodPrice + others * othersFoodPrice;

    printf("%.2f", sum) + " lv";
    return 0;
}