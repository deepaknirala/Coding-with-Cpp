#include <iostream>
//Null pointer is a pointer that does not point to any object or function.
// It is a pointer that has not been assigned a valid memory address.
//when a ptr is holding a null value it is not pointing to anything.

// nullptr is a keyword in C++ to represent a null pointer literal

int main() {
  int *pointer = nullptr; // Initialize a pointer to null
  int x=12345;
  pointer = &x; // assign a valid address to the pointer

  if(pointer==nullptr){
    std::cout<<"address was not assigned!\n";
    //std::cout<<*pointer<<std::endl; // Dereferencing a null pointer leads to undefined behavior
  }
  else{
    std::cout<<"address was assigned!\n";
    std::cout<<*pointer<<std::endl;
  }
  return 0;
}
//if we comment out line 11 & try to dereference a null pointer(activate line 15)
//it will lead to undefined behavior i.e. program crash
//or segmentation fault 