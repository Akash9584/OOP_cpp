#include <iostream>
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
    Teacher(string n, string g, string p, float h, int s)        // Parameterised Constructor
    {
        name = n;
        gender = g;
        hight = h;
        post = p;
        salary = s;
    }
};
void print(Teacher T)
{
    cout << "Teacher's name: " << T.name << endl;
    cout << "Teacher's gender: " << T.gender << endl;
    cout << "Teacher's post: " << T.post << endl;
    cout << "Teacher's hight: " << T.hight << endl;
    cout << "Teacher's salary: " << T.salary << endl;
}
int main()
{
    Teacher T1("Amit", "Male", "Professor", 5.8, 40000);
    print(T1);
    cout << endl;
    Teacher T2;
    T2.name = "Madhuri sahu";
    T2.gender = "Female";
    T2.hight = 5.6;
    T2.post = "Professor";
    T2.salary = 50000;
    print(T2);
    return 0;
} 
