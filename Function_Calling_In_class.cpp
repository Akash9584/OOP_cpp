#include<iostream>
using namespace std;
class Car {
    public :
        string name;
        int model_no;
        string series;
        int batch;
        int seat ;
        string fuel;
        string type;

};
void print(Car c){
    cout<<c.name<<" "<<c.model_no<<" "<<c.series<<" "<<c.batch<<" "<<c.seat<<" "<<c.fuel<<" "<<c.type<<endl;
}
void change(Car &c){
    c.name = "Toyota";
}

int main (){
    Car c1;
    c1.name = "Hunday";
    c1.model_no = 125;
    c1.series = "Venau";
    c1.batch = 231;
    c1.seat = 8;
    c1.fuel = "CNG";
    c1.type = "Automatic"; 
    print(c1);
    change(c1);
    print(c1);
    cout<<"Enter a car name: ";
    getline(cin,c1.name);
    print(c1);
    return 0;
}
