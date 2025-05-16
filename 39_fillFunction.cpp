#include <iostream>

//fill() func fills a range of elements with a specified value
//fill(begin, end, value) 
int main() {
  const int SIZE=15;
  std::string foods[SIZE];
  fill(foods, foods+(SIZE/2), "pizza");
  //parameters are pointers to the first and one past the last element of the array
  fill(foods+(SIZE/2), foods+SIZE, "burger");

  for(std::string food : foods) { //printing contents of the array using range-based for loop
    std::cout<<food<<"\n";
  }
  return 0;
}