// Q2)wap to create a class student having name age rollno avg marks as its member input the details from
// keyboard and display the details to monitor by overloading the extraction and insertion operator.

#include <iostream>
#include <string.h>
using namespace std;

class student
{
    string name;
    int age;
    int rollno;
    int avgmarks;

public:
    friend void operator>>(istream &, student &);
    friend void operator<<(ostream &, student &);
};
void operator>>(istream &in, student &s1)
{
    cout << "name : \n";
    in >> s1.name;
    cout << "age : \n";
    in >> s1.age;
    cout << "roll no : \n";
    in >> s1.rollno;
    cout << "avgmarks : \n";
    in >> s1.avgmarks;
};
void operator<<(ostream &out, student &s1)
{

    out << "name : " << s1.name << endl;
    out << "age : " << s1.age << endl;
    out << "roll no. : " << s1.rollno << endl;
    out << "avrage marks : " << s1.avgmarks << endl;
    //return out;
}
int main()
{
    student s1;
    cin >> s1;
    cout << s1;
    return 0;
}
