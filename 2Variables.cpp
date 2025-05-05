#include <iostream>

int main() {
  int x; //declaration
  x=5; // initialization
  
  //integer 
  int y=7; //declaration and initialization
  int sum=x+y; //sum of x and y

  //double
  double price=10.99;
  double gpa=2.5;
  double temp=25.1;

  //single character
  char grade='A';
  char initial='B';
  char currency='$';

  //boolean
  bool student=true;
  bool power=false;
  bool forSale=true;

  //string(objects that represents a sequence of text)
  std::string name="Deepak";
  std::string day="Monday";
  std::string address="123 Main st.";

  std::cout<<x<<'\n'; //output x
  std::cout<<y<<'\n'; //output y
  std::cout<<sum<<'\n'; //output sum  
  std::cout<<"Hello "<<name<<'\n';

  return 0;
}