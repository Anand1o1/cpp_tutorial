// when we create a data member using static keyword then that data member belongs to class and
// we dont need any object to access it



//static functions
//we dont need to create object to access static functions
//static functions dosn't have this keyword.
//static functions can access only static members.

#include <iostream>
#include <string.h>
using namespace std;

class anand
{
    int roll;
    int age;
    static int looks;
    

public:
    //static int looks;

    anand(){
        cout<<"input looks : ";
        cin>>looks;           //static keyword can be used inside a constructor but you have to first initialize it outside the 
                              //class  int anand :: looks; and then you it inside the constructor there will be no error
        cout<<"\nlooks : "<<looks<<endl;
    }
    void aalooks(){
        cout<<"enter looks : ";
        
        cout<<looks;   //once you initialize it outside the class you can use it inside the function
    }

    static void setlooks(){
        cout<<"input new look :";
        cin>>looks;
        cout<<"\nanand new looks is : "<<looks;
    }


};

int anand ::looks;

int main()
{
    //cout<<anand::looks;
    anand a1;
    a1.aalooks();
    //cout<<anand::looks;   //this can be used only if static data member in inside public access modifier
    anand::setlooks();

    return 0;
}