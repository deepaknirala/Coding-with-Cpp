#include <iostream>

double getTotal(double prices[], int size);

int main() {
  double prices[]={49.99,15.15,75,19.18};
  int size=sizeof(prices)/sizeof(prices[0]);
  double total=getTotal(prices, size);//when we pass an array to a func, we only pass array name
  // the address of the first element of the array is passed to the function
  std::cout<<"Total: "<<total<<std::endl;
  return 0;
}

//double getTotal(double prices[], int size) this function don't have idea about how big the array is
// so we need to pass the size of the array as a second parameter
double getTotal(double prices[], int size){ 
  double total=0;
  for(int i=0;i<size;i++){
    total+=prices[i];
  }
  return total;
}