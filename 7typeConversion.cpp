#include <iostream>

int main(){
//type conversion=conversion a value of one data type to another.Two ways:
//implicit=automatic conversion
//explicit=manually => precede value with new data type (cast operator) variable=(new data type) value;

  int x=3.14; //implicitly only the integer part is stored
  std::cout<<x<<'\n'; //Output: 3

  char y=100; //100 is treated as ASCII value of 'd' in char data type
  std::cout<<y<<'\n'; //ASCII value of 100 is 'd' Output: d

  int correct=8;
  int total=10;
  //double score=correct/total * 100; 
  //here without typecasting, it will do integer division, result is 0

  double score=(double)correct/total * 100; //explicit conversion to double, result is 80
  std::cout<<score<<"%"<<'\n'; //Output: 80.0%

  /*Note: In C++, if both operands are not same type
  then the smaller type is converted to the larger type.
  Example: int/double = double
  */

  return 0;
}