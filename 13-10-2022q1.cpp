/* q1. Name, roll number, age of student. Derive a class mark from student that stores the three subject marks and the respective average marks.
1. Initialise the details at the time of creation of the object by taking input from the user.
2. The details are to be made input by explicitly calling the base class parameterised constructor.

q2. WAP to create a class library that stores the details of a book like name of the book, name of the author, and number of pages.
Derive a class publisher that stores the name of the publisher, and year of publication by using necessary function input and display the details by justifying runtime binding.
Deallocate all the respective memories after the details are displayed.*/
#include <iostream>
#include <string.h>
using namespace std;
class marks;
class student
{
protected:
    string name;
    int roll;
    int age;

public:
    student()
    {
        cout << "enter name \n";
        cin >> name;
        cout << "enter roll number :\n";
        cin >> roll;
        cout << "enter age : \n";
        cin >> age;
    }
};
class marks : protected student
{
private:
    int marks[2];
    float avg;


public:
    void getmarks()
    {
        float sum = 0;
        for (int i = 0; i < 3; i++)
        {
            cout << "subject " << i+1 << " marks : ";
            cin >> marks[i];
            cout << "\n";
            sum += marks[i];
        }
        avg = sum / 3.0;
        cout << "the average marks of the student is : "<<avg;
        cout << endl;
    }
    void display(){
        cout<<"name is : "<<name;
        
        cout<<"\nroll number is : "<< roll;
        cout<<"\nage is : "<<age;
        cout<<"\nmarks of three subjects are: \n";
        for (int i = 0; i < 3; i++)
        {
            cout<<"subject "<<i+1<<" marks : "<<marks[i]<<endl;

        }
        cout<<"\nthe average marks is : "<<avg;
        

    }
};
int main()
{
    marks m1;
    m1.getmarks();
    m1.display();
    
    

    return 0;
}