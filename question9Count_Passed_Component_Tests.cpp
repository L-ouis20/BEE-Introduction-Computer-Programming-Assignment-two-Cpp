#include <iostream>
using namespace std;

int main()
{
    int result;
    int passed = 0;
    int failed = 0;

    for(int i = 1; i <= 15; i++)
    {
        cout << "Enter 1 for Pass, 0 for Fail: ";
        cin >> result;

        if(result == 1)
            passed++;
        else
            failed++;
    }

    cout << "Passed Components = "
         << passed << endl;

    cout << "Failed Components = "
         << failed;

    return 0;
}