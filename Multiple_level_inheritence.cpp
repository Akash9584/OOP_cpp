#include<iostream>
using namespace std;
class LivingThing{
    protected :
        bool breathing;
        string eat;
    public :
        LivingThing(bool breathing, string eat){
            this->breathing = breathing;
            this->eat = eat;
        }    
        void print(){
            cout<<"Breathing: "<<breathing<<endl;
            cout<<"Eating: "<<eat<<endl;
        }
};
class Animal :public LivingThing{
    protected:
        string name;
        bool walk;
        string sound;
    public: 
        Animal(bool breathing, string eat, string name, bool walk, string sound) : LivingThing(breathing, eat){
            this->name = name;
            this->walk = walk;
            this->sound = sound;
        } 
        void print1(){
            cout<<"Name: "<<name<<endl;
            print();
            cout<<"Walk: "<<walk<<endl;
            cout<<"Sound: "<<sound<<endl;
        }   
};
class Dog : public Animal {
    public:
        string breed;
        string bark;
        Dog (bool breathing, string eat, string name, bool walk, string sound, string breed, string bark):Animal (breathing, eat, name, walk, sound){   
        this->breed = breed;
        this->bark = bark;
        } 
        void display(){
            print1();
            cout<<"Breed: "<<breed<<endl;
            cout<<"Bark: "<<bark<<endl;
        }

};

int main (){
    Dog D(true, "Roti", "Max", true, "Bark", "jarman saferd", "Loud");
    D.display();
    cout<<"\n"<<endl;
    Dog D1(true, "Egg", "Dogi", true, "Bark", "Indian", "Soft");
    D1.display();
    return 0;
}

