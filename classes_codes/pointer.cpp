
#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int* p = &a; // &a is the address of a 'a' and int* p is a pointer where we store that value
    cout<<a<<endl<<&a<<endl<<p<<endl;
    return 0;
}