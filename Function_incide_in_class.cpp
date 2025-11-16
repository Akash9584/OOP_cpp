#include<iostream>
using namespace std;
class Teacher
{
public:
    string name;
    string gender;
    float hight;
    string post;
    int salary;
    Teacher()           // Defult Constructor
    { 
    }
    Teacher(string name, string gender, string post, float higth, int salary)        // Parameterised Constructor
    {
        this->name = name;
        this->gender = gender;
        this->hight = higth;
        this->post = post;
        this->salary = salary;
    }
    void print(string name)
{
    cout << "Name: " << name << endl;
    cout << "Teacher's name: " << this->name << endl;
    cout << "Teacher's gender: " << this->gender << endl;
    cout << "Teacher's post: " << this->post << endl;
    cout << "Teacher's hight: " << this->hight << endl;
    cout << "Teacher's salary: " << this->salary << endl;
}
};

int main()
{
    Teacher T1("Amit", "Male", "Professor", 5.8, 40000);
    T1.print("Akash");
    cout << endl;
    Teacher T2;
    T2.name = "Madhuri sahu";
    T2.gender = "Female";
    T2.hight = 5.6;
    T2.post = "Professor";
    T2.salary = 50000;
    T2.print("Gaurav");
    return 0;
}
