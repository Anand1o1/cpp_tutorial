#include <iostream>
#include <string.h>
using namespace std;
template <typename T>
class anand
{
    T kg;

public:
    void setdata(T x)
    {
        kg = x;
    }
    T getdata()
    {
        return kg;
    }
};
int main()
{
    anand<int> obj1;
    obj1.setdata(50);
    cout << "weight of anand is : " << obj1.getdata() << endl;
    return 0;
}