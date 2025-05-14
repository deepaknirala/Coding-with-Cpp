#include <iostream>

double square(double length);
double cube(double length);
// function prototype

int main(){
  double length;
  std::cout<<"Enter the length of the side of the cube: ";
  std::cin>>length;
  double area=square(length);
  double volume=cube(length);
  std::cout<<"The area of the square is: "<<area<<" sq unit"<<'\n';
  std::cout<<"The volume of the cube is: "<<volume<<" cubic unit"<<'\n';
  return 0;

}

double square(double length){
  return length * length;
}
double cube(double length){
  return length * length * length;
}