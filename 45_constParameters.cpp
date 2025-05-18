#include <iostream>
using namespace std;
void printInfo(string name, int age);
int main() {
  //const parameter=parameter that is effectively read-only
  //code is more secure and less error-prone
  string name="John";
  int age=25;
  printInfo(name, age);
  return 0;
}

void printInfo(const string name,const int age){
  //name="Dora"; // since these variables are const,
  //age=30;  //if we try to change them it throws error
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
}