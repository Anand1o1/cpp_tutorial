// Q1) wap to create a class rupee that stores the amonunt of rupees at its private data member
// create another class dollar that stores the respective amount in dolllar as its private data member
// input the amount of dollar from keyboard and convert the respective amount in rupees and store
// that value to the rupees class and display it
// 1) perform the respective conversion by writing the casting operator function
// 2) and also use the constructor method to perform the necessary conversion and display it.
// hint 1$=82.86 INR

#include <iostream>
using namespace std;
class rupees;
class dollars
{
    float dollar;

public:
    dollars()
    {
        cout << "enter amount : " << endl;
        cin >> dollar;
    }
    float getdollar()
    {
        return dollar;
    }
    operator rupees();
   
};
class rupees
{
    float inr;
    float dollar_to_inr;

public:
    rupees(){

    };
    rupees(int z)
    {
        dollar_to_inr = z;
    }
    // rupees(dollars d1)
    // {
    //     dollar_to_inr = d1.getdollar() * 82.86;
    // }
    void getconverted()
    {
        cout << "the converted amount from dollar to rupees is : " << dollar_to_inr;
    }
};
dollars:: operator rupees()
{
        float y;
        y = dollar * 82.62;
        return rupees(y);
    }
int main()
{
    dollars d1;
    rupees r1;
    r1 = d1;
    r1.getconverted();

    // rupees r1(d1);
    // r1.getconverted();
    return 0;
}