// #include<iostream>
// #include<string.h>

// using namespace std;
// class anand{
//     private:
//     int siri;
//     public:
//     string chemistry;
//     static int arkajyoti;
//     anand(){  //non paramaterised constructor
//         cout<<"non paramaterised constructor \n";
//     }
//     //paramaterised constructor
//     anand(string chemistry ){
//         this->chemistry=chemistry;
//         cout<<chemistry;
//         cout<<"paramaterised constructor\n";
//     }
//     //copy constructor
//     anand(anand &hero){
//         cout<<"copy constructor called \n";
//         this->chemistry=hero.chemistry;
//         cout<<this->chemistry;
//     }
//     int setsirii(int n){
//         siri=n;
//         return siri;
//     }
//     int getsirii(){
//         return siri;
//     }

// };
// int anand ::arkajyoti=5;
// int main(){
//     anand hero;
//     anand hero2("constructor :");
//     anand hero3(hero2);
//     cout<<endl<<anand::arkajyoti;
//     cout<<endl<<hero.arkajyoti;

// }

#include <iostream>
#include <string.h>
using namespace std;
class teacher
{
public:
    string subject;
    int period;
    void setsubject()
    {
        cin >> subject;
    }
};
class student : public teacher
{
    string name;
    int marks;

public:
    void setname()
    {
        cin >> name;
    }
    void setmarks()
    {
        cin >> marks;
    }
    void print(){
        cout<<name<<marks<<subject;
    }
};
int main()
{
    student s1;
    s1.setname();
    s1.setsubject();
    s1.setmarks();
    s1.print();
    
    return 0;
}