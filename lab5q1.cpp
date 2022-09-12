// 1.write a program  to create a  class  student having name , roll number and subject mark as its member.
// Initialize the details of two students at the time of creation where the name and subject marks are decided at
//  the time of creation.//Deallocate the memory by creating user defined destructor.
#include <iostream>
#include <string.h>
using namespace std;
class student
{
    string name;
    int rollnum;
    int *marks;

public:
    void nameit(){cin>>name;}
    void roll(){cin>>rollnum;}
    void gmarks(int n){
        marks=(int *)malloc(sizeof(int)*n);
        for (int i = 0; i < n; i++)
        {
            cin>>marks[i];
        }
    }
    ~student(){cout<<"destruct\n";}

};
int main(int argc, char const *argv[])
{
    class student s[2];
    int n;
    cout<<"enter the number of subject marks you want to input\n";
    cin>>n;
    
    cout<<"enter name \n";
    s[0].nameit();
    cout<<"enter roll no.\n";
    s[0].roll();
    cout<<"enter marks\n";
    s[0].gmarks(n);
    cout<<"enter name \n";
    s[1].nameit();
    cout<<"enter roll no.\n";
    s[1].roll();
    cout<<"enter marks\n";
    s[1].gmarks(n);

    return 0;
}
