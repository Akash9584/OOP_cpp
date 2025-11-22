#include<iostream>
using namespace std;
class Person{
    protected: 
        string name ;
        int age;
        float hight;
    public:
        Person(string name, int age, float hight){
            this->name = name;
            this->age = age;
            this->hight = hight;
        }
        void print(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Hight: "<<hight<<endl;
        }    
};
class Teacher :public Person{
    public:
        int teacher_id;
        Teacher(string name, int age, float hight, int teacher_id): Person (name, age, hight){
            this->teacher_id = teacher_id;
        }
        void display(){
            print();
            cout<<"Teacher ID: "<<teacher_id<<endl;
        }
};
class Student: public Person{
    public:
        int student_id;
        Student (string name, int age, float hight,int student_id):Person(name, age, hight){
            this->student_id = student_id;
        }
        void display(){
            print();
            cout<<"Student ID: "<<student_id<<endl;
        }
};
int main (){
    cout<<"----Teachers Details----"<<endl;
    Teacher T("Saloni Shriwastav", 26, 5.1f, 5214);
    T.display();
    cout<<endl;
    Teacher T1("Amit Pathak", 35, 5.8f, 3517);
    T1.display();
    cout<<"\n----Students Details----"<<endl;
    Student S("Ankit Tiwari", 19, 5.3f, 6548);
    S.display();
    cout<<endl;
    Student S1("Anshum Kori", 18, 5.4f, 6875);
    S1.display();
    return 0;
}
