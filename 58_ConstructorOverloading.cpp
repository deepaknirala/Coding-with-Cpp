#include <iostream>
using namespace std;

//overloaded constructor=multiple constructor with same name but different parameters
//it allows for varying arguments when instantiating an object

class Pizza{
  public:
  //attributes
    string topping="plain"; //default value
    string topping1;
    string topping2;
  Pizza(){  //constructor with no parameters //default constructor explicitly defined here
    //it is plain pizza without any toppings
  }
  Pizza(string topping1){ //overloaded constructor with one parameter
    this->topping1=topping1; // this-> keyword is to refer to attribute of current object
  }
  Pizza(string topping1, string topping2){//overloaded constructor with two parameters
    this->topping1=topping1;
    this->topping2=topping2;
  }

};

int main() {
  Pizza pizza1("cheese");
  cout<<"Pizza 1 topping: "<<pizza1.topping1<<endl;
  Pizza pizza2("pepperoni", "mushroom");
  cout<<"Pizza 2 toppings: "<<pizza2.topping1<<" "<<pizza2.topping2<<endl;
  Pizza pizza3;
  cout<<"Pizza 3 topping: "<<pizza3.topping<<endl;
  //pizza3 is plain pizza without any toppings
  return 0;
}