#include<iostream>
using namespace std;
class Collage {
    public :
    string collage_name;
    int collage_gate;
    int collage_bus;
    float collage_fees;

};
int main (){
    Collage c;
    c.collage_name = "TIT Collage Bhopal";
    c.collage_gate = 3;
    c.collage_bus = 20;
    c.collage_fees = 80501.50;
    Collage c1;
    c1.collage_name = "OCT collage Bhopal";
    c1.collage_gate = 2;
    c1.collage_bus = 15;
    c1.collage_fees = 117001.50;
    cout<<c.collage_name<<" "<<c.collage_gate<<" "<<c.collage_fees<<" "<<c.collage_bus<<endl;
    cout<<c1.collage_name<<" "<<c1.collage_gate<<" "<<c1.collage_fees<<" "<<c1.collage_bus<<endl;
    return 0;
}
