#include <iostream>
#include <string.h>
using namespace std;

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
    marks operator+(marks m1)
    {
        marks temp;
        temp.external = m1.external + this->external;
        temp.internal = m1.internal + this->internal;
        return temp;
    }
    marks operator-(marks m)
    {
        marks temp;
        temp.external = m.external - this->external;
        temp.internal = m.internal - this->internal;
        return temp;
    }
};
int main()
{

    marks m1(20, 30);
    marks m2(30, 20);
    marks m3;
    m3 = m1 + m2;
    m3.display();
    marks m4;
    m4 = m2.operator-(m1);
    m4.display();
    return 0;
} 