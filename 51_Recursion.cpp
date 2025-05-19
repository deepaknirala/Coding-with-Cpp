#include <iostream>
using namespace std;
//Two approaches to solve a problem: iterative and recursive
/*  Recursion = a programming technique where a function calls itself
    invokes itself from within, break a complex concept into a repeatable single step
    advantages: less code, easier to read, easier to debug
    disadvantages: uses more memory and slower than iteration. */

int factorial(int num);

int main() {
  cout<<factorial(10)<<" "; //function call
  return 0;
}

int factorial(int num){
  int result;
  if(num==0 || num==1){
    return 1; //base case
  }
  else {
    result= num*factorial(num-1); //recursive case
    return result; //return the result
  }
}