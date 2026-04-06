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
    }
};
void change(cricket* c){
    (*c).avg = 77.5;
}
int main(){
    cricket c1("Virat Kohli", 25000, 55.2);

    cout<<c1.avg<<endl;
    change(&c1);
    cout<<c1.avg<<endl;

    cricket* p1 = &c1; // pointer to object c1
    cout<<(*p1).runs<<endl; //c1.runs
}