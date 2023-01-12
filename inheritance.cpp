#include <iostream>
#include <string.h>
using namespace std;

class anand
{
    int age;

public:
    virtual void rang()
    {

        cout << "the color of anand is : ";
    }
};
class soyam : public anand
{

    int color;

public:
    void rang()
    {

        cout << "the color of soyam is : ";
    }
};
int main(int argc, char const *argv[])
{
    anand *a1;
    soyam s1;
    a1 = &s1;
    a1->rang();
    return 0;
}
