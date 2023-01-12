// q1) wap to create a file and stores the name of the student which is entered by the user from the keyboard
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main()
{
    ofstream out("student.txt");
    string name;
    cout<<"student name : ";
    cin>>name;
    out<<"name of the student is : "<<name;
    return 0;
}