#include <iostream>
// function overloading is a feature in C++ that allows us to 
//define multiple functions with the same name but different parameters
void bakePizza(); 
void bakePizza(std::string topping1); // function overloading
void bakePizza(std::string topping1,std::string topping2); // function overloading with 2 parameters

int main() {
  bakePizza("pepperoni"); // function call
  bakePizza("mushroom","onion"); // function call
  return 0;
}
//function definition
void bakePizza(){
  std::cout<<"Here is your pizza!\n";
}
//function name with parameter is known as function signature
void bakePizza(std::string topping1){ 
  std::cout<<"Here is your pizza with "<<topping1<<"!\n";
}

void bakePizza(std::string topping1,std::string topping2){
  std::cout<<"Here is your pizza with "<<topping1<<" and "<<topping2<<"!\n";
  std::cout<<"Enjoy your pizza!\n";
}