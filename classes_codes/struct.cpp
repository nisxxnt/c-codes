#include <iostream>
using namespace std;
struct student
{
    int id ;
    string name;
    float marks;
};
struct names
{
    string name;

};
int main()
{
    student s1;
    s1.id = 101;
    s1.name = "john";
    s1.marks = 85.5;

    student s2;
    s2.id = 102;
    s2.name = "jane";
    s2.marks = 90.0;
    
    student s3;
    s3.id = 103;
    s3.name = "bob";
    s3.marks = 75.0;

    student s4;
    s4.id = 104;
    s4.name = "alice";
    s4.marks = 88.0;

    student s5;
    s5.id = 105;
    s5.name = "eve";
    s5.marks = 92.0;

    student s6;
    s6.id = 106;
    s6.name = "charlie";
    s6.marks = 82.0;

    student s7;
    s7.id = 107;
    s7.name = "mallory";
    s7.marks = 88.0;

    student s8;
    s8.id = 108;
    s8.name = "david";
    s8.marks = 87.0;

    student s9;
    s9.id = 109;
    s9.name = "emily";
    s9.marks = 95.0;

    student s10;
    s10.id = 110;
    s10.name = "frank";
    s10.marks = 89.0;

    int choice;
    cout<<"Enter student id: ";
    cin>>choice;

    while (choice < 101 || choice > 110)
    {
        cout << "Invalid student ID. Please enter a valid student ID (101-110): ";
        cin >> choice;
    }
    while (choice >= 101 && choice <= 110)
    {
        break;
    }

    if (choice == 101)
    {
        cout << "Student 1: " << s1.name << ", Marks: " << s1.marks << endl;
    }
    else if(choice == 102)
    {
        cout << "Student 2: " << s2.name << ", Marks: " << s2.marks << endl;
    }
    else if(choice == 103)
    {
        cout << "Student 3: " << s3.name << ", Marks: " << s3.marks << endl;
    }
    else if(choice == 104)
    {
        cout << "Student 4: " << s4.name << ", Marks: " << s4.marks << endl;
    }
    else if(choice == 105)
    {
        cout << "Student 5: " << s5.name << ", Marks: " << s5.marks << endl;
    }
    else if(choice == 106)
    {
        cout << "Student 6: " << s6.name << ", Marks: " << s6.marks << endl;
    }
    else if(choice == 107)
    {
        cout << "Student 7: " << s7.name << ", Marks: " << s7.marks << endl;
    }
    else if(choice == 108)
    {
        cout << "Student 8: " << s8.name << ", Marks: " << s8.marks << endl;
    }
    else if(choice == 109)
    {
        cout << "Student 9: " << s9.name << ", Marks: " << s9.marks << endl;
    }
    else if(choice == 110)
    {
        cout << "Student 10: " << s10.name << ", Marks: " << s10.marks << endl;
    }
    else
    {
        cout << "Student not found." << endl;
    }
    return 0;
}
