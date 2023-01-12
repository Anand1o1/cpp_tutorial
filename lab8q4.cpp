// 4. WAP to create a class test that stores the number of units of an item and price of each in rupees. Input the details for two units,
// overload the greater operator which compares between the total price of the two instances and returns the property of that instance which is having
// higher total value otherwise simply displays equal when the total value is found to be same.

#include <iostream>
#include <string.h>
using namespace std;
class test
{
private:
    int units;
    int price;

public:
    void setunit()
    {
        cin >> units;
    }
    void setprice()
    {
        cin >> price;
    }
    friend int operator>(test &t1, test &t2);
};
int operator>(test &t1, test &t2)
{
    if ((t1.units * t1.price) > (t2.units * t2.price))
    {
        cout << "t1 is greater " << endl;
        return (t1.units * t1.price);
    }
    else if ((t1.units * t1.price) < (t2.units * t2.price))
    {
        cout << "t2 is greater " << endl;
        return (t2.units * t2.price);
    }
    cout<<"equal ";
    return -1;
    
}
int main()
{
    test t1, t2;
    t1.setunit();
    t1.setprice();
    t2.setunit();
    t2.setprice();
    //int t3=t1>t2;
    int t3=operator>(t1,t2);
    

    return 0;
}