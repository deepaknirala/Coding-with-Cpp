#include <iostream>
//ternary operator ?: is replacement to an if/else statement
//condition ? expression1 : expression2;
int main(){
  using namespace std;
  bool hungry=true;

  hungry? cout<<"You are hungry!"<<endl:cout<<"You are full!"<<endl;
  //The above line is equivalent to:
  cout<<(hungry?"You are hungry!": "You are full!");
  return 0;
}