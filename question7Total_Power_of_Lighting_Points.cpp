#include <iostream>
using namespace std;

int main()
{
    float wattage, totalPower = 0;

    for(int i = 1; i <= 12; i++)
    {
        cout << "Enter wattage for light " << i << ": ";
        cin >> wattage;

        totalPower += wattage;
    }

    cout << "Total Lighting Load = "
         << totalPower << " W";

    return 0;
}