// Q1)wap to create a class employee that stores the grade(ABC) and monthly salary of an employee overload the
// uniary increment and decrement operator using member function and friend function respectively where the
// pre form of the unary operator is applied.

// b)in the above example preform the post decrement using friend function and pre increment using member
// function and display the values.

#include <iostream>
#include <string.h>
using namespace std;
class employee
{
private:
    char grade;
    int monthlysalary;

public:
    void setgrade(char grade)
    {
        this->grade = grade;
    }
    void gergrade()
    {
        cout << this->grade;
    }
    void getmonthlysalary()
    {
        cout << this->monthlysalary<<endl;
    }
    void operator++(int a){ //for post form you have to write a int argument inside the bracket
        cout<<"post form increment overload is used : "<<endl;
    }
    void operator++()   //pre form 
    {
        if (grade == 'A')
        {
            this->monthlysalary = 50000;
            ++this->monthlysalary;
            cout << "the new monthly salary is : " << this->monthlysalary << endl;
        }
        if (grade == 'B')
        {
            this->monthlysalary = 25000;
            ++this->monthlysalary;
            cout << "the new monthly salary is : " << this->monthlysalary << endl;
        }
        if (grade == 'C')
        {
            this->monthlysalary = 15000;
            ++this->monthlysalary;
            cout << "the new monthly salary is : " << this->monthlysalary << endl;
        }
    }
    void operator--(){
        
        cout<<"the old salary was : "<<--this->monthlysalary<<endl;
    }
    friend void operator++(employee &e1){
        cout<<"pre increment friend fuction is used "<<endl;
    }
    friend void operator--(employee &e1, int)
    {
        cout << "salary after decrement is : " << --e1.monthlysalary << endl;
    }
};
int main()
{
    employee e1;
    e1.setgrade('A');
    e1.operator++();
    e1.getmonthlysalary();
    e1.operator--();
    e1.operator++(5);
    operator--(e1, 5);
    operator++(e1);

    return 0;
}