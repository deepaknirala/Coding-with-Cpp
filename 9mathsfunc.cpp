#include <iostream>
#include <cmath> // math functions

int main(){
  //ref: cplusplus.com/reference/cmath/
  double x=3.99;
  double y=4;
  double z;
  //z= std::max(x,y);  //return max(3.99,4) = 4
  //z= std::min(x,y);  //return min(3.99,4) = 3.99
//------------------cmath functions------------------
  //z= abs(-x);    //return abs(-3.99) = 3.99
  //z= sqrt(9);  //return sqrt(9) = 3
  //z= pow(2,3);  //return pow(2,3) = 8
  //z= round(3.5);  //return round(3.5) = 4
  //z= ceil(3.5);  //return ceil(3.5) = 4
  z= floor(x);  //return floor(x) = 3
  std::cout<<z; 
  
  return 0;
}