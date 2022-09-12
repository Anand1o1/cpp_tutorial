// 2.write  a program to create a class employee having employee name, department name, id ,
//  monthly salary as its member. Initialize the details by accepting input from keyboard
//  and user defined parametrized constructor function. Create a user defined copy constructor to
//  copy the properties of one instance to another and display the details by calling a friend function
#include <iostream>
#include <string.h>

using namespace std;
class employee
{
    string name;
    string department;
    int id;
    int monthlysalary;

public:
    employee()
    {
        cout << "pass some parameter";
    }
    employee(string na, string dep, int i, int month)
    {
        cout << "enter name\n";
        cin >> na;
        name = na;
        cout << "enter department\n";
        cin >> dep;
        department = dep;
        cout << "enter id\n";
        cin >> i;
        id = i;
        cout << "enter monthlysalary\n";
        cin >> month;
        monthlysalary = month;
    }
    employee(employee &k)
    {
        // cout << "enter name\n";
        this->name = k.name;
        // cout << "enter department\n";
        this->department = k.department;
        // cout << "enter id\n";
        this->id = k.id;
        // cout << "enter monthlysalary\n";
        this->monthlysalary = k.monthlysalary;
    }
    friend void display(employee &);
};
void display(employee &e)
{
    cout << "the name is : ";
    cout << e.name << endl;
    cout << "The department is : ";
    cout << e.department << endl;

    cout << "the employee id is : ";
    cout << e.id << endl;

    cout << "the monthly salary is : ";
    cout << e.monthlysalary << endl;
}
int main(int argc, char const *argv[])
{
    // class employee e1;
    employee e1("a", "c", 2, 5);
    employee temp(e1);

    display(temp);

    return 0;
}
