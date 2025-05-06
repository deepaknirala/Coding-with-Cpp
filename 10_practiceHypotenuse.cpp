#include <iostream>
#include <cmath>
//finding hypotenuse of a right angled triangle
int main(){
  using namespace std;
  double base,perpen,hypoten;

  cout<<"Enter base: ";
  cin>>base;

  cout<<"Enter perpendicular: ";
  cin>>perpen;

  hypoten=sqrt(pow(base,2)+pow(perpen,2));
  cout<<"Hypotenuse is: "<<hypoten<<endl;

  return 0;
}