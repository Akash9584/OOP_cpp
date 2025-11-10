#include<iostream>
using namespace std;
class Student {
    public :
        int roll_no;
        float CGPA;
        string name;

};
int main (){
    Student s1;
    s1.roll_no = 41;
    s1.CGPA = 7.2;
    s1.name = "Gaurav ";
    
    Student s2;
    s2.roll_no = 25;
    s2.CGPA = 6.7;
    s2.name = "Akash ";
    cout<<s1.name<<" " <<s1.roll_no<<" "<<s1.CGPA<<endl;
    cout<<s2.name<<" "<<s2.roll_no<<" "<<s2.CGPA<<endl;
    return 0;
}
