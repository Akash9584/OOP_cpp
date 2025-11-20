#include <iostream>
using namespace std;
class Student
{
private:
    float marks;

public:
    string name;
    int roll_no;
    Student()
    {
    }
    Student(int roll_no, string name, float marks)
    {
        this->name = name;
        this->marks = marks;
        this->roll_no = roll_no;
    }
    void print()
    {
        cout << "Student Name: " << name << endl;
        cout << "Student Roll_No: " << roll_no << endl;
        cout << "Student Marks: " << marks << endl;
    }
    int getdata()
    {
        return marks;
    }
    void setdata(float marks)
    {
        this->marks = marks;
    }
};
int main()
{
    Student s1;
    s1.name = "Gaurav Kushwaha";
    s1.roll_no = 41;
    s1.setdata(86.6);
    cout << s1.getdata() << endl;
    s1.print();
    cout << endl;
    Student s2(50, "Vikash Kushwaha", 73.2);
    s2.print();

    return 0;
}
