#include <iostream>

int main() {
  int marks[]={65,75,81,93,78};
  //using range-based for loop
  //for each loop iterates over an iterable data set
  for(int i:marks){
    std::cout<<i<<std::endl;
  }
  return 0;
}