// we can initialize the data member of a class  with the initialization list in a constructor function.
// The initialization of the data members happens the way they are declared in the class irrespective of the initialization order.

// 1.write a program to create a class student having the name , roll no., section name as its member.
// Create another class marks which stores 3 subject marks and average mark of a student and is derived from student class.
// Input the details of two students and display all the details.
#include <iostream>
#include <string.h>
using namespace std;
class student;
class marks
{
private:
    int subject[3];
    int average;

public:
    friend void derive(class student &a, class marks &b);
};
class student
{
private:
    string name;
    int roll;
    string section;
    int submarks[3];

public:
    friend void derive(class student &a, class marks &b);
    void getname()
    {
        cout << "enter name : ";
        cin >> name;
        cout << endl;
    }
    void getroll()
    {
        cout << "enter roll : ";
        cin >> roll;
        cout << endl;
    }
    void getsec()
    {
        cout << "enter secton :";
        cin >> section;
        cout << endl;
    }
    void getmarks()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "enter subject " << i + 1 << " marks :";
            cin >> submarks[i];
        }
        cout << endl;
    }
};
void derive(class student &a, class marks &b)
{
    cout<<"\n";
    cout << "name :" << a.name << endl;
    cout << "roll :" << a.roll << endl;
    cout << "section :" << a.section << endl;
    for (int i = 0; i < 3; i++)
    {
        b.subject[i] = a.submarks[i];
    }
    int avg;
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = sum + b.subject[i];
    }
    avg = sum / 3;
    b.average = avg;
    cout << "the average of the 3 subject marks is :" << b.average<<"\n"<<endl;
}
int main()
{
    class student s[2];
    class marks m[2];
    for (int i = 0; i < 2; i++)
    {
        
        s[i].getname();
        s[i].getroll();
        s[i].getsec();
        s[i].getmarks();
        derive(s[i],m[i]);
        
    }
    

    return 0;
}