// there are three types of casting operator function
// i) basic to class
// ii) class type to basic type
// iii) one class to other class type

// basic to class;
#include <iostream>
#include <string.h>
using namespace std;
class student
{
    int x;

public:
    // student(){

    // };
    // student(int x)
    // {
        
    // }
    void operator=(int k)
    {
        this->x = k;
    }
    void showx()
    {
        cout << "value of x is : " << x << endl;
    }

    // ii)class type to basic type
    operator int()
    {
        return x;
    }
};
int main()
{
    student s1;
    //basic to class type
    //s1 = 100;
    s1.operator=(100);
    s1.showx();
    // ii)class type to basic type
    int x = s1;
    cout << "value of x is : " << x << endl;
    return 0;
}