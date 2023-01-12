// Q2) wap to create a class length that stores the length unit in feet and inches input the total length
// in inches at the time of creation of the object
// 1)assign the length value of the respective object to a system defined unit that stores the length
// in feet and print the output
// 2)assign the total length unit that is store in a system defined varible to the object by using the necessary
// conversion funtion and display the length in feet and inches
// hint: add all the constructors and destructors

#include <iostream>
#include <string.h>
using namespace std;
class length
{
    float feet, inches;
    float totallen;

public:
    length(){
        cout<<"zero argument constructor called \n";
    }
    length(int x){
        cout<<"parameterised constructor called \n";
    }
    void getlength()
    {
        cout << "enter feet : " << endl;
        cin >> feet;
        cout << "enter inches : " << endl;
        cin >> inches;
        totallen = (feet * 12) + inches;
        cout << "total length in inches : " << totallen << endl;
    }
    int gettotal()
    {
        return totallen;
    }
    operator int()
    {
        float mn = inches / 12.0;
        float total;
        total = feet + mn;
        return total;
    }
    void operator=(int y)
    {
        this->feet = y / 12;
        this->inches = y % 12;
        cout << "feet : " << this->feet << endl;
        cout << "inches : " << this->inches << endl;
    }
    ~length(){
        cout<<"destructor called \n";
    }
};
int main()
{
    length l1;
    l1.getlength();
    float x;
    x = l1;
    cout << "the total length in feet is : " << x << endl;

    int y = l1.gettotal();
    length l2;
    l2 = y;

    return 0;
}