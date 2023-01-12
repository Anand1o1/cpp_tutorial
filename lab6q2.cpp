// 2. considering  question 1 details, students and marks are two independent classes.
// Derive a class "grade" from "student" and "marks" which is having grade as its member.
// IF avgmark>90 (grade O) .....avg mark<90 and avg mark > 80 ( grade B) else assign grade as C.
// Input the details and display all the details of a student.
#include <iostream>
#include <string.h>
using namespace std;
class marks;
class grade;
class student
{
private:
    string name;
    int roll;
    string section;
    int submarks[3];

public:
    friend void derive(class student &a, class marks &b, class grade &c);
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
class marks
{
private:
    int subject[3];
    int average;

public:
    friend void derive(class student &a, class marks &b, class grade &c);
};
class grade
{
private:
    string avggrade;

public:
    friend void derive(class student &a, class marks &b, class grade &c);
};
void derive(class student &a, class marks &b, class grade &c)
{
    cout << "\n";
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
    cout << "the average of the 3 subject marks is :" << b.average << "\n"
         << endl;
    if (b.average > 90)
    {
        c.avggrade="A";
        cout << "the avggrade is : A " << endl;
    }
    else if (b.average < 90 && b.average > 80)
    {
        c.avggrade="B";
        cout << "the avggrade is : B" << endl;
    }
    else
    {
        c.avggrade="C";
        cout << "the avggrade is : c " << endl;
    }
}
int main()
{
    class student s[2];
    class marks m[2];
    class grade g[2];
    for (int i = 0; i < 2; i++)
    {
        
        s[i].getname();
        s[i].getroll();
        s[i].getsec();
        s[i].getmarks();
        derive(s[i],m[i],g[i]);
    }
}