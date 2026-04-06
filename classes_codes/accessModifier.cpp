#include <iostream>
using namespace std;
class student{
    public:
    int rno;
    string name;
    student(int rno, string name, float marks){
        this->rno = rno;
        this->name = name;
        this->marks = marks;
    }
    float getmarks(){ //getter
        return marks;
    }
    void setmarks(float m){
        marks = m;
    }
private:
    float marks;
};
int main(){
    student s1(21, "Nishant", 80.5);
    cout<<s1.getmarks()<<endl;
    s1.setmarks(85.0);
    cout<<s1.getmarks()<<endl;
}