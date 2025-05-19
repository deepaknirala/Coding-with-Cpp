#include <iostream>
using namespace std;

//inheritance = a class can receive attributes & methods from another class
//base class/parent class/superclass = class that is inherited by other classes
//derived class/child class/subclass = the class that inherits from another class
// inheritence helps in code reusability

class Animal{ //parent class
  public:
    bool isAlive=true; //public attribute
    void eat(){ //public method
      cout<<"This animal is eating"<<endl;
    }
};

class Dog: public Animal{ //child class of Animal
  public:
    void bark(){
      cout<<"Woof! Woof!"<<endl;
    }
};

class Cat: public Animal{ //child class of Animal so it will inherit all public stuffs from its parent class
  public:
    void meow(){
      cout<<"Meow! Meow!"<<endl;
    }
};
int main() {
  //derived class object can access all public attributes & methods of base class

  Dog dog; //creating an object of derived class
  Cat cat;
  cout<<"Is dog alive?(True:1/False:0): "<<dog.isAlive<<endl; //accessing public attribute of base class
  dog.eat(); //accessing public method of base class
  dog.bark(); //accessing its own method
 
  cout<<"Is cat alive?(True:1/False:0): "<<cat.isAlive<<endl; //accessing public attribute of base class
  cat.eat(); //accessing public method of base class
  cat.meow(); //accessing its own method
  return 0;
}