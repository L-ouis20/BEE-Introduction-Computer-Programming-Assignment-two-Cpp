#include <iostream>
using namespace std;

int main()
{
    float reading;
    float total = 0;
    int count = 0;

    for(int i = 1; i <= 12; i++)
    {
        cout << "Enter sensor reading: ";
        cin >> reading;

        if(reading == 999)
            continue;

        total += reading;
        count++;
    }

    if(count > 0)
    {
        cout << "Average Reading = "
             << total / count;
    }

    return 0;
}