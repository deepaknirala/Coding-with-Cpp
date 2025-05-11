#include <iostream>

int main(){
  using namespace std;
  int number;

  //do while loop => do some block of code at least once and then check the condition
  do{
    cout<<"Enter a +ve number: ";
    cin>>number;
  }while(number<0);
  cout<<"The number is "<<number;

  return 0;
}