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
void print (Cricketer M){
    cout<<"Cricketer Name: "<<M.name<<endl;
    cout<<"Cricketer Runs: "<<M.runs<<endl<<endl;
}
int main (){
    Cricketer c1("Virath Kohali", 25000);
    Cricketer c2("Rohit Shrama", 18000);
    print(c1);
    print(c2);
    return 0;
}
