#include <iostream>
using namespace std;
class vector{
public:
    int size;
    int capacity;
    int* arr;
    vector(){
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    void add(int ele){
        if(size == capacity){
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i=0; i<size;i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = ele;
    }
    void print(){
        for(int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    vector v;
    v.add(10);
    v.print();
    v.add(20);
    v.print();
    v.add(30);
    v.print();
}