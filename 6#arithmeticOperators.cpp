#include <iostream>

int main(){
  int students=20;
  students += 6; // Add 6 students
  students++;
  students-=3; // Remove 3 students

  students*=2; // Double the number of students
  std::cout<<students<<'\n';

  students/=4; // Divide the number of students by 4
  std::cout<<students<<'\n';

  int remainder=students%5; //%modulus operator
  std::cout<<remainder<<'\n'; // Remainder of students divided by 5

  //precedence of operators
  int val= 6-(5+3)*2/4; // 6-(8*2)/4=6-16/4=6-4=2
  std::cout<<val<<'\n'; // 2
  // Associativity of operators
  int val2= 6-5+3*2/4; // 6-5+3*2/4 = 1+6/4 = 1+1=2
  std::cout<<val2<<'\n'; // 2

  return 0;
}