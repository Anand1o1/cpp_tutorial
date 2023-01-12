// 3. WAP to create a class employee that stores the employee name, age and monthly salary.
// Overload the binary + operator to add user defined incentive to the monthly salary and display it.
// (i) Object + incentive value
// (ii) Incentive + operator
#include <iostream>
#include <string.h>
using namespace std;
class employee
{
private:
    string name;
    int age;
    int monthlysalary;
    int incentive;

public:
    void getinfo(string name, int age, int monthlysalary)
    {
        this->name = name;
        this->age = age;
        this->monthlysalary = monthlysalary;
    }
    void getincentive()
    {
        cin >> incentive;
    }
    void operator+(char k)
    {

        this->monthlysalary = this->monthlysalary + this->incentive;
        cout << this->monthlysalary<<endl;
    }
    friend void operator+(int salary, employee &e1)
    {
        e1.monthlysalary = e1.incentive + salary;
        cout << e1.monthlysalary<<endl;
    }
};
int main()
{
    employee e1;
    e1.getinfo("anand", 18, 50000);
    e1.getincentive();
    e1.operator+('k');
    operator+(100000,e1);
    //50000 + e1;

    return 0;
}