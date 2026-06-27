#include <iostream>
using namespace std;

int main()
{
    float power;
    float total = 0;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter power reading: ";
        cin >> power;

        if(power < 0)
        {
            cout << "Invalid reading skipped." << endl;
            continue;
        }

        total += power;
    }

    cout << "Total Valid Power = "
         << total << " W";

    return 0;
}