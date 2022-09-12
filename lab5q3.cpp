// write a program to create a user defined zero argument constructor, parametrized and copy constructor
// and verify that the memory get released in the reverse order of their allocation by using a
// user defined destructor function.
#include <iostream>
using namespace std;
class hero
{
    int level;

public:
    hero()
    {

        level = 1;
        cout << "level is : " << level << endl;
    }
    hero(int heal, int lev)
    {
        level = 2;
        cout << "level is : " << level << endl;
    }

    hero(hero &k)
    {
        level = 3;
        cout << "level is : " << level << endl;
    }
    ~hero()
    {
        cout << level << "destructor executed\n";
    }
};

int main(int argc, char const *argv[])
{
    hero h1;
    hero h2(99, 98);
    {
        hero h4;
    };
    hero h3(h2);

    return 0;
}
