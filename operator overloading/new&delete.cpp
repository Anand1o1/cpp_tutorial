#include <iostream>
#include <string.h>
#include <stdlib.h> //as we are going to use malloc
using namespace std;

class marks
{
    int internal;

public:
    
    void *operator new(size_t size)
    {
        void *ptr;
        cout << "overloaded new " << endl;
        cout << "size is : " << size;
        ptr = malloc(size);
        return ptr;
    }
    void operator delete(void *ptr)
    {
        cout << "overload delete operator ";
        free(ptr);
    }
};
int main()
{
    marks *m1=new marks();
    delete m1;
    return 0;
}