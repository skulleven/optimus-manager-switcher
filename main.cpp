#include "iostream"
#include <cstdlib>
#include <ostream>

using namespace std;

int selection = 0;
void Start()
{
    system("clear");
    cout<<"Welcome to optimus manager switcher."<<endl;
    cout<<"-----------------------------------------------------------------" <<endl;
    cout<<"WARNING : Make sure you save any work before selecting an option." <<endl;
    cout<<"After selecting an option you will be logged out." <<endl;
    cout<<"-----------------------------------------------------------------" <<endl;
    cout<<"1) NVIDIA" <<endl;
    cout<<"2) Integrated"<<endl;
    cout<<"3) Hybrid"<<endl;
    cout<<"-----------------------------------------------------------------" <<endl;
    cout<<"Select an option : ";
    cin >> selection;
    
}


int main()
{
    Start();
    switch (selection) {
    case 1:
        system("clear");
        system("optimus-manager --switch nvidia");
        break;
    case 2:
        system("clear");
        system("optimus-manager --switch integrated");
        break;
    case 3:
        system("clear");
        system("optimus-manager -- switch hybrid");
        break;
    default:
        cout<<"Please select a valid option"<<endl;
        Start();
        break;
    }
    return 0;
}