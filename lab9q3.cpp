// Q3)wap to overload the assigment operator to assign the properties of one class to another also add
// constructors and destructors to verfy the respectve invokation.

#include <iostream>
#include <string.h>
using namespace std;
class marks;
class assignment
{
    string name;
    int age;

public:
    assignment()
    {
        cout << "constructor is called \n";
    }
    assignment(string name, int age)
    {
        this->name = name;
        this->age = age;
        cout << "parameterised constructor called \n";
    }
    // void setinfo(string name,int age){
    //     this->name=name;
    //     this->age=age;
    // }

    // assignment(assignment &a1)
    // {
    //     this->age=a1.age;
    //     this->name=a1.name;
    //     cout << "copy constructor is called \n";
    // }
    void operator=(assignment &a1)
    {
        this->age = a1.age;
        this->name = a1.name;
    }
    void display()
    {
        cout << "name : " << this->name << " ,age : " << this->age << endl;
    }
    ~assignment()
    {
        cout << "destructor called \n";
    }
};
int main()
{
    assignment a1("anand", 18);
    assignment a2("arkomc", 15);
    // assignment a1,a2;
    // a1.setinfo("anand",18);
    // a2.setinfo("shrey",19);
    a1.display();
    a2.display();
    a2.operator=(a1);
    // assignment a3(a2);
    // a3.display();
    a2.display();
    return 0;
}
