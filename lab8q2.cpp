// 2. WAP to justify the overloading of logical AND using member function and bitwise AND using friend function.
#include <iostream>
#include <string.h>
using namespace std;
class test
{
private:
    int age;

public:
    void setage(int a)
    {
        this->age = a;
    }
    void showage()
    {
        cout << age << endl;
    }
    test operator&&(test &t1)
    {
        test t3;
        t3.age = this->age + t1.age;
        return t3;
    }
    test friend operator&(test &t1, test &t2)
    {
        test t3;
        t3.age = t1.age * t2.age;
        return t3;
    }
};
int main()
{
    test t1, t2;
    t1.setage(18);
    t2.setage(55);
    test t3;
    //t3 = t1 && t2;
    t3 = t1.operator&&(t2);
    t3.showage();
    //t3 = t1 & t2;
    t3=operator&(t1,t2);
    t3.showage();

    return 0;
}