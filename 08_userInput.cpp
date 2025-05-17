#include <iostream>

int main(){

  /* cout << (insertion operator) to show output on screen.
     cin >> (extraction operator) to take input from user.
     endl is used to insert a new line and flush the output buffer.
  */
  std::string name;
  int age;

  std::cout<<"What's your full name? ";
  std::getline(std::cin, name); // taking full name input from user
  // std::getline is used to take input with spaces in between.
  //syntax: getline(input_stream, string_variable, delimiter);
  //string_variable is the variable in which we want to store the input.
  //delimiter(optional) is used to specify the end of input. by default it is '\n'.

  /* std::getline(std::cin >>std::ws, name); 
  std::ws is used to ignore any whitespace character before user any input
  */
  std::cout<<"What's your age? ";
  std::cin>>age; // taking age input from user
  std::cout<<"hello " <<name<<'\n';
  std::cout<<"you are " <<age << " years old.";

  return 0;
}