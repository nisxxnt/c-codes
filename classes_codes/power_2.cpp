#include <iostream>
using namespace std;
int power(int a, int b){
    if (b == 0) return 1;
    else if(b == 1) return a;
    else if(b%2 == 0){
        return power(a, b/2) * power(a, b-b/2);
    }
    else{
        return a * power(a,b-1);
    }
}
int main()
{
    int a, b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<power(a, b);
}