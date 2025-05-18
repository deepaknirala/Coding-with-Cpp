#include <iostream>
using namespace std;
void swap(string &x, string &y);

int main() {
  string x="Watermelom";
  string y="Mango";
  swap(x,y);

  cout<<"x: "<<x<<endl;
  cout<<"y: "<<y<<endl;
  return 0;
}
//void swap(string x, string y) value of x and y won't be swapped
// because they are passed by value and a copy of the x & y values are passed here

// void swap(string &x, string &y) value of x and y will be swapped
// because they are passed by reference
void swap(string &x, string &y){
  string temp;
  temp=x;
  x=y;
  y=temp;
}