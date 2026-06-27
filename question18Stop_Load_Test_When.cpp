#include <iostream>
using namespace std;

int main()
{
    float power;
    float totalLoad = 0;

    for(int i = 1; i <= 20; i++)
    {
        cout << "Enter appliance power (W): ";
        cin >> power;

        totalLoad += power;

        if(totalLoad > 5000)
        {
            cout << "Maximum load exceeded. Stop adding appliances." << endl;
            break;
        }
    }

    cout << "Final Total Load = "
         << totalLoad << " W";

    return 0;
}