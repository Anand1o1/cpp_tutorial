#include <iostream>
#include<string>
using namespace std;
class hero
{
    
    int health;
    string level;

    public:

    //non parematerised conctructor
    // hero(){
    //     cout<<"constructor called ";
    // }

    //paramaterised constructor
    hero(int health,string level){
        this->health=health;
        this->level=level;
    }

    //copy constructor
    hero(hero &temp){
        this->health=temp.health;
        this->level=temp.level;

    }
    void printit(){
        cout<<"health is :"<<health<<endl;
        cout<<"level is :"<<level<<endl;
    }
    int  gethealth(int h)
    {
        health = h;
        return health;
    }
    string getlevel(string ch)
    {
        level = ch;
        return level;
    }
};
int main()
{
    // hero h1;
    // hero *h2= new hero;
    // cout << "health is : " << h1.gethealth(100)<<endl;
    // cout<<"level is : "<<h1.getlevel("hello")<<endl;
    // cout<<"health of h2 is :"<<h2->gethealth(39)<<endl; //dynamically passed thats why ->
    // cout<<"level of h2 is :"<<h2->getlevel("easy")<<endl;
    hero temp(90,"hard"); //to pass a paramaterised constructor u need to add a variable with parameters 
    temp.printit();
    hero anand(temp);
    anand.printit();
    }
