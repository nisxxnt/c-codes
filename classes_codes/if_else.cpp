#include <iostream>
using namespace std;
int main()
{
    int age;
    cin>>age;
    if(age < 13)
    {
        cout<<"child";
    }
    else if(age > 13 and age <= 18 )
    {
        cout<<"growing age";
    }
    else
    {
        cout<<"adult";
    }
    return 0;
}