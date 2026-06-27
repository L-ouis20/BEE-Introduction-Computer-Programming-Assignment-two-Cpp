#include <iostream>
using namespace std;

int main()
{
    float voltage, current, power;
    char choice;

    do
    {
        cout << "Enter Voltage (V): ";
        cin >> voltage;

        cout << "Enter Current (A): ";
        cin >> current;

        power = voltage * current;

        cout << "Power = "
             << power << " W" << endl;

        cout << "Perform another calculation? (Y/N): ";
        cin >> choice;

    } while(choice == 'Y' || choice == 'y');

    return 0;
}