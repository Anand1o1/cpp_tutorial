#include <iostream>
#include <string.h>
using namespace std;
template <typename T>
T add(T x, T y)
{
    return (x + y);
}

template <typename T, typename M>
M add(T x, M y)
{
    return (x + y);
}
int main()
{
    cout << "the addition of integer 3 and 4 is : " << add<int>(3, 4) << endl;
    cout << "the addition of float 3.0 and 4.0 is : " << add<float>(3.0f, 4.0f) << endl;
    cout << "the addition of integer 3 and double 4.0 is : " << add<int,double>(3, 4.0)<< endl;

    return 0;
}