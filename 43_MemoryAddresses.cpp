#include <iostream>
using namespace std;
int main() {
  string name="Daniel";
  int age=22;
  bool student=true;
  //memory address can be fetched using address operator &
  cout<<&name<<endl;  //shows address of variable name in hexadecimal
  cout<<&age<<endl;
  cout<<&student<<endl;
  return 0;
}