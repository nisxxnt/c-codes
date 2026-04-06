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
int main(){
    // cricket c1("Virat Kohli", 25000, 55.2);
    int* p = new int(10); // dynamic memory allocation for an integer
    cout<<*p<<endl;
}