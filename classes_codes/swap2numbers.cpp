#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 5;
    cout<<a<<" "<<b<<endl;
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;
    return 0;
}