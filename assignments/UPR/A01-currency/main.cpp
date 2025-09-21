#include <iostream>
using namespace std;

int main()
{
    int currencyList[4] = {5000, 1000, 500, 100};
    int input = 0;

    while (!input)
    {
        cout << "Enter your amount: ";
        cin >> input;
    }

    for (int i = 0; i < sizeof(currencyList) / sizeof(int); i++)
    {
        if (input >= currencyList[i])
        {
            int count = input / currencyList[i];
            cout << currencyList[i] << " x " << count << "\n";
            input = input % currencyList[i];
        }
    }
    if (input > 0)
    {
        cout << "Remaining amount: " << input;
    }

    return 0;
}