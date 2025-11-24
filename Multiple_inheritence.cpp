#include<iostream>
using namespace std;
class Person {
    protected :
        string name;
        int age;
    public :
        Person (string name, int age){
            this->name = name;
            this->age = age;
        }    
        void print(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }    
          
};
class Skills{
    protected:
        string Post;
        string Expert;
    public :
        Skills(string Post, string Expert){
            this->Post = Post;
            this->Expert = Expert;
        }    
        void print1(){
        cout<<"Post: "<<Post<<endl;
        cout<<"Expert: "<<Expert<<endl;
    }
};
class Employee : public Person, Skills{
    public :
        string Employee_id;
        int work_experience;
        Employee(string name, int age, string Post, string Expert, string Employee_id, int work_experience): Person (name, age), Skills(Post,Expert){
            this->Employee_id = Employee_id;
            this->work_experience = work_experience;
        }
        void display(){
            print();
            print1();
            cout<<"Employee_id: "<<Employee_id<<endl;
            cout<<"Work Experience: "<<work_experience<<" years"<<endl;
        }
};
int main (){
    Employee E("Akhand pratap singh", 23, "Assitence Engineer", "DCS Expert", "12445SR", 1);
    E.display();
    cout<<"\n"<<endl;
    Employee E1("Ayush kumar", 19, "Software Engineer", "Java Expert", "69745AL", 2);
    E1.display();
    return 0;
}
