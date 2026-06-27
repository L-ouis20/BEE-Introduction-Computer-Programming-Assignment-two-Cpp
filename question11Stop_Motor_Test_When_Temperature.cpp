#include <iostream>
using namespace std;

int main()
{
    float temperature;

    cout << "Enter motor temperature: ";
    cin >> temperature;

    while(temperature <= 90)
    {
        cout << "Enter motor temperature: ";
        cin >> temperature;
    }

    cout << "Motor temperature unsafe. Stop motor test.";

    return 0;
}