// #include <iostream>
// #include <string.h>
// using namespace std;

// void *operator new(size_t size)
// {
//     void *p = malloc(size);
//     cout << "memory allocated";
//     return p;
// }
// void operator delete(void *p)
// {
//     cout << "delete operator overloading" << endl;
//     free(p);
// }

// int main()
// {
//     int *p = new int[5];
//     delete []p;

//     return 0;
// }

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class test
{
    int x;

public:
    test(int x = 5)
    {
        this->x = x;
    }
    void *operator new(size_t size)
    {
        cout << "overloading new operator size :" << size << endl;
        void *p = malloc(size);
        return p;
    }
    void operator delete(void *p)
    {
        cout << "overload Delete operator" << endl;
        free(p);
    }
};
int main(int argc, char const *argv[])
{
    test *t = new test();
    delete t;
    return 0;
}