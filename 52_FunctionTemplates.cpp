#include <iostream>
using namespace std;
//function templates=describe what a function looks like
//it is used to create a function that can work with any data type as needed
//can say it is used to generate overloaded functions as much as we want 

/* here for using max function with different data types,
    we have to create overloaded functions for each data type
int max(int x, int y){
  return (x>y)? x:y;
}
double max(double x, double y){
  return (x>y)? x:y;
}
*/
//instead of creating overloaded func for each datatype we can use function templates
template <typename T, typename U> //template keyword to define it, typename is to define data type
// T max(T x, U y){ //T and U type are taken as paramenters and T type will be returned
auto max(T x, U y){ //so auto keyword used to automatically deduce the return type of function
  return (x>y) ? x : y; // we have flexibility to give x and y of different datatype and get result of any datatype automatically
}

int main() {
  cout<<max(15, 21)<<"\n";
  cout<<max(25.7, 21.5)<<"\n";
  cout<<max(17, 23.45)<<"\n";
  return 0;
}

/*Note: templates are used when we want to do same set of operations on many data types
while function overloading is used when we want to do different set of operations on same data type
*/