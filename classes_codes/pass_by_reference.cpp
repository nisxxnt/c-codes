#include <iostream>
using namespace std;
int swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}
int main()
{
    int a = 2;
    int b = 5;
    cout<<a<<" "<<b<<endl;
    swap(&a, &b);
    cout<<a<<" "<<b<<endl;
    return 0;
}