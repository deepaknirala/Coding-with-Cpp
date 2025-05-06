#include <iostream>

namespace first{
  int x=1;
}
namespace second{
  int x=2;
}

int main() {
  using namespace std;
  //using namespace std; 
  //this is used to avoid writing std:: before every standard library function

  int x=0;

  //std::cout<<x<<'\n'; no need to write std::cout now
  cout<<x<<'\n';
  //:: is scope resolution operator
  //prefix the namespace before :: operator
  //to access the variable inside the namespace
  std::cout<<first::x<<'\n';
  std::cout<<second::x;
  
  return 0;
}