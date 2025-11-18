#include<iostream>
using namespace std;
class Collage {
    public :
    string collage_name;
    int collage_gate;
    int collage_bus;
    float collage_fees;
    Collage (string collage_name, int collage_gate, int collage_bus, float collage_fees) {
        this->collage_name = collage_name ;
        this->collage_gate = collage_gate;
        this->collage_fees = collage_fees;
        this->collage_bus = collage_bus;
    }

};
void print (Collage* c){
    cout<<c->collage_name<<" "<<c->collage_gate<<" "<<c->collage_fees<<" "<<c->collage_bus<<endl;
}
int main (){
    Collage c1("TIT Collage Bhopal",3, 20,80501.50f);   // static memory allocation
    print(&c1);
    Collage* c2 = new Collage("OCT collage Bhopal",2, 15, 117001.5f);   //dynamic memory allocation
    print(c2);
    return 0;
}
