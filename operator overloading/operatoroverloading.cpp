#include <iostream>
#include <string.h>
using namespace std;
class marks
{
    int mark;

public:
    marks(int x)
    {
        mark = x;
    }
    void display()
    {
        cout << "marks is : " << mark<<endl;
    }
    marks operator()(int y)
    {
        this->mark = y;
        cout << "operator overloaded " << endl;
        return *this;
    }
};
int main()
{
    marks m1(50);
    m1.display();
    m1(100);
    m1.display();
    return 0;
}