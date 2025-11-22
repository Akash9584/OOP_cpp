#include <iostream>
using namespace std;
class Scooty
{
protected:
    string name;
    string fuel;
    bool boot_space;

public:
    Scooty(string name, string fuel, bool boot_space)
    {
        this->name = name;
        this->fuel = fuel;
        this->boot_space = boot_space;
    }
    void print()
    {
        cout << "Scooty/Bike Name: " << name << endl;
        cout << "Type of fuel: " << fuel << endl;
        cout << "Boot space: " << boot_space << endl;
    }
};
class Bike : public Scooty
{
public:
    int gear;
    Bike(string name, string fuel, bool boot_space, int gear) : Scooty(name, fuel, boot_space)
    {
        this->gear = gear;
    }
    Bike(string name, string fuel, bool boot_space) : Scooty(name, fuel, boot_space)
    {
    }
    void display()
    {
        print();
        cout << "Gear: " << gear << endl;
    }
};
int main()
{
    cout<<"-----Scooty Details-----"<<endl;
    Bike B1("Activa 6G", "Petrol", true);
    B1.print();
    cout<<"\n-----Bike Details-----"<<endl;
    Bike B2("Hero Honda", "Petrol", false, 4);
    B2.display();
    return 0;
}
