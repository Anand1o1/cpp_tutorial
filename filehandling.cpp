#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;
// int main()
// {
//     fstream o;
//     o.open("fuck.txt", ios::in | ios::out | ios::trunc);
//     o << "hosiyarr vaibhav";
//     string s; 
//     o.seekg(0,ios::beg);
//     char ch[100]="sandy";
//     //o.put(ch[0]);
//     for (int i = 0; i < strlen(ch); i++)
//     {
//         o.put(ch[i]);
//     }
    
//     o.seekg(0);
//     getline(o, s);
//     cout << s;
//     o.close();
//     // fstream r;
//     // r.open("fuck.txt");
//     // string k;
//     // getline(r, k);
//     // cout << k;
// }

int main(){
    ifstream out;
    ofstream in;
    string str;
    in.open("fuck.txt");
    int p=in.tellp();
    cout <<p;
    out.open("vaibhav.txt");
    out<<"vaibhav patel";
    while (!in.eof())
    {
        getline(out,str);
        // for(int i=0;i<)
    }
    out.seekg(0);
    while (!out.eof())
    {
        getline(out,str);
        cout<<str;
    }
    
    
}