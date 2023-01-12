// Q3) wap to create a class employee that stores the name basic salary and the grade of an employee overload
// the new operator to alllocate memory and then stores the value and also overload the delete operator to
// deallocate the memory and also add user defined constructor and destructor in the program

// ii) using necessary conversion function assigne the name of the employee to a system defined and display it

#include <iostream>
#include <string.h>
using namespace std;
class employee
{
    string name;
    int basicsalary;
    char grade;

public:
    employee()
    {
        cout << "name : ";
        cin >> name;
        cout << "\nbasic salary : ";
        cin >> basicsalary;
        cout << "\ngrade : ";
        cin >> grade;
        cout<<endl;
    }
    void getinfo()
    {
        cout << "name : " << name << endl;
        cout << "basic salary : " << basicsalary << endl;
        cout << "grade : " << grade << endl;
    }
    void *operator new(size_t size)
    {
        void *p = (void *)malloc(size);
        return p;
    }
    void operator delete(void *p)
    {
        cout << "memory deallocated : " << endl;
        free(p);
    }
    operator string(){
        return this->name;

    }
    ~employee()
    {
        cout << "destructor called : \n";
    }
};
int main()
{
    employee *e1;
    e1 = new employee;
    e1->getinfo();
    delete e1;
    employee e2;
    string s1;
    s1=e2;
    cout<<"the name of employee2 is : "<<s1<<endl;
    return 0;
}

//doubt: when we are creating pointer employee s1=e1 is not working but when an object is created like employee e2
// and then s1=e2 then it is working