#include <iostream>
#include <vector>

//typedef is used to create an alias for a type.
//It is often used to simplify complex type declarations or 
//to create more meaningful names for types.
// 'using' keyword is more modern n preferred (work better with templates)

typedef std::string text_t; // text_t is an alias for std::string
//typedef int number_t;
using number_t = int; // number_t is an alias for int

int main(){

  text_t firstName = "Deepak";
  number_t age = 27;

  std::cout<<firstName<<'\n';
  std::cout<<age<<'\n';


  return 0;
}