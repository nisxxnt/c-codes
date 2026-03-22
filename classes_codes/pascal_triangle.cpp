#include<iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    for(int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}
int ncr(int n, int r) //funtion for factorial
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i = 0; i <= n; i++) //for each row 
    {
        for(int j = 0; j <= n-i; j++) //for spaces on the sides of these numbers      
        {
            cout<<" ";
        }
        for(int j = 0; j <= i; j++) //for each column 
        {
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}