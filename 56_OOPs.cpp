#include <iostream>
using namespace std;
//class= A blueprint for creating objects
//object= A collection of data & methods
//it can mimic real world items & can have properties & behaviors

class Human{
    public: //public access specifier
        string name;
        string occupation;
        int age;
        bool isAlive=true; //here isAlive is default attribute with value=true
        //this class has 4 propeties name, occupation, age, isAlive
        // and 3 behaviors eat, code, sleep
        void eat(){ 
            cout<<name<<" is eating"<<endl;
        }
        void code(){
            cout<<name<<" is coding"<<endl;
        }
        void sleep(){
            cout<<name<<" is sleeping"<<endl;
        }
};


int main() {
    //creating an object of class Human
    Human h1;
    Human h2;
    h1.name="Sidharth";
    h1.occupation="Software Engineer";
    h1.age=28;

    h2.name="S.Reddy";
    h2.occupation="Teacher";
    h2.age=52;

    cout<<"Name: "<<h1.name<<endl;
    cout<<"Occupation: "<<h1.occupation<<endl;
    cout<<"Age: "<<h1.age<<endl;
    h1.eat();
    cout<<"----------------------------------------\n";
    cout<<"Name: "<<h2.name<<endl;
    cout<<"Occupation: "<<h2.occupation<<endl;
    cout<<"Age: "<<h2.age<<endl;
    cout<<"Status(alive:1, dead:0): "<<h2.isAlive<<endl;
    h2.sleep();
    
  return 0;
}