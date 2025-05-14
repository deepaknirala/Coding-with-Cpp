#include <iostream>
int num=0; //global variables
int myNum=5;
//local variables = variables declared inside a function or block{} & destroyed when function ends
//global variables = declared outside of all functions & accessible to all functions
void printNum();

int main() {
  int myNum=1; //local variable of main()
  std::cout<<myNum<<'\n'; //prints 1
  std::cout<<num<<'\n'; //prints 0 as num is global variable
  std::cout<<::myNum<<'\n'; //to use global version of myNum, we use scope resolution operator ::
  printNum();//prints 2 and 0

  return 0;
}

void printNum(){
  int myNum=2; //local variable of printNum()
  std::cout<<myNum<<'\n';
  std::cout<<::num<<'\n'; //prints 0 as num is global variable
}