#include <iostream>
using namespace std;
class cricket{
    public:
    string name;
    int runs;
    float avg;
    cricket(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Runs: "<<this->runs<<endl;
        cout<<"Average: "<<this->avg<<endl;
    }
};
int main(){
    cricket c1("Virat Kohli", 25000, 55.2);
    cricket c2("Rohit Sharma", 20000, 50.2);
    return 0;
}