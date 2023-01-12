// 1. WAP to create a class test having the marks of a student overload the unary - using member function and friend function to justify
// the overloading of the unary - operator.
// 2. WAP to justify the overloading of logical AND using member function and bitwise AND using friend function.
// 3. WAP to create a class employee that stores the employee name, age and monthly salary. Overload the binary + operator to add user defined incentive
// to the monthly salary and display it.
// (i) Object + incentive value
// (ii) Incentive + operator

// 4. WAP to create a class test that stores the number of units of an item and price of each in it in rupees. Input the details for two units,
// overload the greater operator which compares between the total price of the two instances and returns the property of that instance which is having
// higher total value otherwise simply displays equal when the total value is found to be same.

#include <iostream>
#include <string.h>
using namespace std;
class test
{
protected:
    int marks;

public:
    void settest(int t)
    {
        this->marks = t;
    }
    void operator-(char k)
    {
        this->marks++;
        cout << "marks of the test is : " << this->marks << endl;
    }
    void friend operator-(test &t1);
};
void operator-(test &t1)
{

    t1.marks = t1.marks + 50;
    cout << "marks of the test is increased to : " << t1.marks << endl;
}
int main()
{
    test t1;
    t1.settest(50);
    t1.operator-('k');
    operator-(t1);

    return 0;
}