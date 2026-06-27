#include <iostream>
using namespace std;

int main()
{
    float voltage, current, resistance;
    char choice;

    do
    {
        cout << "Enter Voltage: ";
        cin >> voltage;

        cout << "Enter Current: ";
        cin >> current;

        resistance = voltage / current;

        cout << "Resistance = "
             << resistance
             << " Ohms" << endl;

        cout << "Continue? (Y/N): ";
        cin >> choice;

    } while(choice != 'N' && choice != 'n');

    return 0;
}