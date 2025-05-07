#include <iostream>

int main(){
  int age;
  std::cout << "Enter your age: ";
  std::cin >> age;

  if(age>=100){
    std::cout<<"You too old to enter the site!";
  }
  else if(age<0){
    std::cout<<"Invalid age entered!";
  }
  else if(age>=18){
    std::cout<<"Welcome to the site!";
  }
  else{
    std::cout<<"You are not old enough to enter the site";
  }
  return 0;
}