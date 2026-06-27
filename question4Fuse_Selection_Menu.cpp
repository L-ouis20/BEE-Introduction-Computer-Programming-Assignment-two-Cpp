#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout<<"1. 5A Fuse\n";
    cout<<"2. 10A Fuse\n";
    cout<<"3. 13A Fuse\n";
    cout<<"4. 20A Fuse\n";
    cout<<"5. 32A Fuse\n";

    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Lighting circuits";
            break;

        case 2:
            cout<<"Small appliances";
            break;

        case 3:
            cout<<"Domestic socket outlets";
            break;

        case 4:
            cout<<"Water heaters";
            break;

        case 5:
            cout<<"Air conditioners";
            break;

        default:
            cout<<"Invalid choice";
    }

    return 0;
}