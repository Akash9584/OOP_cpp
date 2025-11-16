#include <iostream>
#include <string>
using namespace std;

class Laptop
{
public:
    string name;
    string company;
    int RAM;
    int ROM;
    string colour;
    float weight;
};

void print(const Laptop &L)
{
    cout << "\nLaptop name: " << L.name << endl;
    cout << "Laptop company: " << L.company << endl;
    cout << "Laptop RAM: " << L.RAM << " GB" << endl;
    cout << "Laptop ROM: " << L.ROM << " GB" << endl;
    cout << "Laptop colour: " << L.colour << endl;
    cout << "Laptop weight: " << L.weight << " kg" << endl;
}

void change(Laptop &L1)
{
    cout << "\nDo you want to change this Laptop data (Yes/No)? enter yes: ";
    string s;
    cin >> s;

    if (s == "yes" || s == "YES" || s == "Yes")
    {
        cin.ignore();

        cout << "\nEnter Laptop name: ";
        getline(cin, L1.name);

        cout << "Enter Laptop company: ";
        getline(cin, L1.company);

        cout << "Enter Laptop RAM (GB): ";
        cin >> L1.RAM;

        cout << "Enter Laptop ROM (GB): ";
        cin >> L1.ROM;

        cin.ignore();

        cout << "Enter Laptop colour: ";
        getline(cin, L1.colour);

        cout << "Enter Laptop weight (kg): ";
        cin >> L1.weight;

        cout << "\nLaptop details after changing:";
        print(L1);
    }
    else
    {
        cout << "No changes made.\n";
    }
}

int main()
{
    Laptop l1;
    l1.name = "Dell 7420";
    l1.company = "Dell";
    l1.RAM = 32;
    l1.ROM = 512;
    l1.colour = "Black";
    l1.weight = 1.8;

    Laptop l2;
    l2.name = "Asus Vivobook 16";
    l2.company = "Asus";
    l2.RAM = 16;
    l2.ROM = 512;
    l2.colour = "Black";
    l2.weight = 1.8;

    cout << "Initial Laptop Details:\n";
    print(l1);
    change(l1);
    cout<<"\nSecond laotop details: "<<endl;
    print(l2);
    change(l2);

    return 0;
}
