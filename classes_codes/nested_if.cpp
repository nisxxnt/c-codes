#include <iostream>
using namespace std;
int main()
{
    int age = 20;
    bool id = true;
    if(age>=18)
    {
        if(id == true)
        cout<<"entry allowed"<<endl;
        else
        cout<<"id required"<<endl;  
    }
    else
    {
        cout<<"under age";
    }
    return 0;
}