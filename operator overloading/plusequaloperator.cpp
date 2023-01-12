#include <iostream>
#include <string.h>
using namespace std;
using namespace std;
class marks;
class viva
{
    int points;

public:
    viva(int po)
    {
        points = po;
    }
    void display()
    {
        cout << "points :" << points;
    }
    friend void operator+=(marks &m1, viva &v1);
};
class marks
{
    int internal;
    int external;

public:
    marks()
    {
    }
    marks(int in, int ex)
    {
        internal = in;
        external = ex;
    }
    void display()
    {
        cout << "internal : " << internal << endl;
        cout << "external : " << external << endl;
    }
    // void operator+=(int external)
    // {
    //     this->internal = this->internal + external;
    // }
    void operator+=(marks &m2)
    {
        this->internal = this->internal + m2.external;
    }
    friend void operator+=(marks &m1, viva &v1);
};
void operator+=(marks &m1, viva &v1)
{
    cout << "total marks : " << m1.external + m1.internal + v1.points;
}
int main()
{
    marks m1(20, 30);
    marks m2(30, 20);
    m1.operator+=(m2);
    m1.display();
    viva v1(50);
    m1 += v1;

    return 0;
}