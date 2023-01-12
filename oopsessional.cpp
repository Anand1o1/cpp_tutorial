#include <iostream>
#include <string.h>
using namespace std;
class employee
{
private:
    string name;
    char ID[100];

public:
    employee()
    {
        cout << "input name : ";
        cin >> this->name;
    }
    employee(string st){

    };
    void operator=(char ch)
    {
        this->ID = ch;
    }
};
int main()
{
    employee e1;
    char ID[100];
    cout << "input ID :";
    cin >> ID;
    if ((ID = 'a' || ID = 'b' || ID = 'c' || ID = 'd' || ID = 'e' || ID = 'f' || ID = 'g') && (ID = '0' || ID = '1' || ID = '2' || ID = '3' || ID = '4' || ID = '5' || ID = '6' || ID = '7' || ID = '8' || ID = '9'))
    {
        e1 = ID;
    }
    else
    {
        cout << "you have entered a wrong ID try again later";
    }

    return 0;
}