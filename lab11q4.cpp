// // 4)wap to take input content from the keyboard store to file and print
// // ithcharacter to gthcharacter(i and j are user input and i and j are inclusive).

// #include <iostream>
// #include <fstream>
// #include <string.h>
// using namespace std;
// int main()
// {
//     ofstream out("name.txt");
//     cout << "enter your full name : ";
//     string name;
//     cin<<name;
//     out << name;
//     cout << "enter the range you want to print : " << endl;
//     int p, j;
//     cin >> p >> j;
//     out.close();
//     ifstream in("name.txt");
//     in.seekg(p, ios::beg);
//     in.get(name);
//     for (int i =in.tellg(); i <=j; i++)
//     {
//         cout << name;
//         in.get(name);
//     }
//     in.close();
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    ofstream out;
    out.open("q4.txt");
    string name;
    cout<<"enter name : ";
    cin>>name;
    out<<name;
    out.close();

    ifstream in("q4.txt");
    string name2;
    in>>name2;
    cout<<name2<<endl;
    in.close();

    int i,j;
    cout<<"enter i : ";
    cin>>i;
    cout<<"enter j : ";
    cin>>j;
    // code to print ith to jth character
    for(int k=i;k<=j;k++){
        cout<<name2[k];
    }
    return 0;
    }