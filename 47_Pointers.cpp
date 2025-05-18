#include <iostream>
using namespace std;
//pointer variable that stores a memory address of another variable 
// & address-of operator
// * dereference operator

int main() {
  string name="David";
  int age=20;
  string colors[5]={"red","blue","green","yellow","black"};
  
  string *pName=&name; // pointer variable that stores the address of name
  int *pAge=&age; // pointer variable that stores the address of age
  string *pcolors=colors;

  cout<<pName<<endl; // prints the address of name
  cout<<*pName<<endl; // prints the value at the address pointing to by pName
  cout<<*pAge<<endl; 
  cout<<*pcolors<<endl; //this gives the first element of the array
  cout<<*(pcolors+1)<<endl; //this gives the 2nd element of the array
  cout<<pcolors[1]<<endl; //this also gives the 2nd element of the array
  
  return 0;
}