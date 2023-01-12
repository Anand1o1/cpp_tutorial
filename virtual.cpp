// In dynamic binding, when we use virtyal functions, the virtual lokup table is created and binding 
//to a vurtual function to a base class pointer pointing to derived class oject occurs by mapping the 
//functions and virtual pointer in the virtual look-up table.

//Constructor being responsible for the constructionnof the instance, it cannot be made virtual.

//  a destructor can be made virtual.In fact making a destructor virtual is actually a need in order
// to prevent memory leak


// A virtual function is use to support the feature of dynamic binding so base class virtual function can be made as pure virtual function
//syntax
//virtual __(return type) fuction name(parameter name)

//when a class is consisting a pure virtual funtion then that class is termed as an ***abstract class***
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    return 0;
}