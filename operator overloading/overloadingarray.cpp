//these are special operators [], () and ->
// all objects should be non static data functions
// we can't use friend

#include <iostream>
#include <string.h>
using namespace std;

class student
{
public:
    
    int arr[5];
    void operator[](int k)
    {
        printf("input numbers : \n");
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
            printf("nuber added is : %d\n",arr[i]);
        }
    }
};

int main()
{
    student s1;
    //s1[2];
    s1.operator[](2);
    
    return 0;
}