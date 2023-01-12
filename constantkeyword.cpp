#include <iostream>
#include <string.h>
using namespace std;

class test
{
private:
    int data = 10;
    const int average; // either declare here the value or using constructor

public:
    // test() //: average(100)
    // {      // like this you can initialize average inside a constuctor
    //     cout << "average : " << average;
    // }
    test(int x) : average(x)
    {
        cout << "average : " << average;

    }; // you can initialize the constant member this way
    void show() const
    {
        //data++; // you can't change value in a constant function
    }

    void setdata(int x)
    {
        //average = x;   //this thing is not possible once you made the variable const
        data = x;
    }
};

int main()
{
    const int x = 10;
    int n = x + 10;
    cout << "the value of x : " << x << endl;
    cout << "the value of n : " << n << endl;
    n++;
    // x=10; you can't declare the constant variable after making it you have to do it at that moment only
    // x++; you can't increment or make any change to a constant variable once it is declared
    test t1(100);
    t1.show();
    t1.setdata(50);

    return 0;
}