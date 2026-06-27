#include <iostream>
using namespace std;

int main()
{
    float L1, L2, L3, average;

    for(int set = 1; set <= 6; set++)
    {
        cout << "\nSet " << set << endl;

        cout << "Line 1 Current: ";
        cin >> L1;

        cout << "Line 2 Current: ";
        cin >> L2;

        cout << "Line 3 Current: ";
        cin >> L3;

        average = (L1 + L2 + L3) / 3;

        cout << "Average Current = "
             << average << " A" << endl;
    }

    return 0;
}