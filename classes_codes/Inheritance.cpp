#include <iostream>
using namespace std;

string first(string str){
    if(str.length() <= 2){
        return " ";
    }
    else{
        return str.substr(1, str.length() - 2);
    }
}
int main(){
    string input;
    cin>>input;
    cout<<first(input)<<endl;
}