#include <iostream>
#include <string.h>
using namespace std;

void division(int a, int b)
{
    try
    {
        if (b == 0)
        {
            throw("error !!!");
        }nt main(){
return 0;
}
        else
        {
            cout << a / b;
        }
    }
    catch (char const *p)
    {
        cout << p;
    }
}

int main()
{
    //division(10, 10);
    division(4,0);

    return 0;
}