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
    void operator++()
    {
        this->internal = this->internal + 1;
        this->external=this->external+1;
        cout << "internal : " << this->internal << endl;
        cout << "external : " << this->external << endl;
    }
    friend void operator--(marks &);
};
void operator--(marks &m1)
{
    m1.external = m1.external - 1;
    m1.internal = m1.internal - 1;
    cout << "internal : " << m1.internal << endl;
    cout << "external : " << m1.external << endl;
};
int main()
{

    marks m1(20, 30);
    marks m2(30, 20);
    //m1.operator++();
    ++m1;
    --m2;
    return 0;
}
