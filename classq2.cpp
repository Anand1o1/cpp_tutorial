#include<iostream>
#include<cmath>
using namespace std;
class intrest;
class basic{
    int principle;
    public:
    friend void calculate(basic,intrest);


};
class intrest{
    int time;
    int rate;
    int n;
    public:
    friend void calculate(basic,intrest);

};
void calculate(basic b1,intrest i1){
    cout<<"enter principle amount : "<<endl;
    cin>>b1.principle;
    cout<<"time : "<<endl;
    cin>>i1.time;
    cout<<"rate : "<<endl;
    cin>>i1.rate;
    cout<<" n : "<<endl;
    cin>>i1.n;
    cout<<"the simple intrest is : ";
    int simpleintrest=b1.principle*i1.rate*i1.time;
    cout<<simpleintrest<<endl;
    cout<<"the compound intrest is : ";
    int compoundintrest=b1.principle*(1+(pow((i1.rate/i1.n),(i1.n*i1.time))));
    cout<<compoundintrest<<endl;
}
int main(){
    class basic b1;
    class intrest i1;
    calculate(b1,i1);
    
}