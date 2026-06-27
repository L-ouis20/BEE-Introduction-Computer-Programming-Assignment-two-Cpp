#include <iostream>
using namespace std;

int main()
{
    float resistance;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter insulation resistance (MOhm): ";
        cin >> resistance;

        if(resistance < 1)
        {
            cout << "Insulation failure detected. Test stopped.";
            break;
        }
        else
        {
            cout << "Insulation reading acceptable." << endl;
        }
    }

    return 0;
}