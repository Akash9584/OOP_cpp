#include<iostream>
using namespace std;
class Cricketer {
    public:
        string name;
        int runs;
    Cricketer(string name, int runs){
        this->name = name;
        this->runs = runs;
    }    
};
void print (Cricketer C){
    cout<<"Cricketer Name: "<<C.name<<endl;
    cout<<"Cricketer Runs: "<<C.runs<<endl<<endl;
}
void change(Cricketer* C){
    C->name = "Sachin";     //  (*c).name = "Sachin" ;
}
int main (){
    Cricketer c1("Virath Kohali", 25000);
    // Cricketer c2("Rohit Shrama", 18000);
    print(c1);
    change (&c1);
    print(c1);
    // print(c2);
    return 0;
}
