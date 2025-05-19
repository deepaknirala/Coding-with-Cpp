#include <iostream>
using namespace std;

struct Car{
  string model;
  int year;
  string color;
}; 

void paintCar(Car &car, string color);

void printCar(Car car) { //passing struct as argument by value
  cout<<"Address of car: "<<&car<<"\n";//this gives local address of car
  cout << "Model: " << car.model << "\n";
  cout << "Year: " << car.year << "\n";
  cout << "Color: " << car.color << "\n";
}

void printCarRef(Car &car) { //passing struct as argument by reference
  cout<<"Address of car: "<<&car<<"\n";//this gives actual address of same car which is passed
  cout << "Model: " << car.model << "\n";
  cout << "Year: " << car.year << "\n";
  cout << "Color: " << car.color << "\n";
}
int main() {
  Car car1;
  Car car2;

  car1.model = "Toyota";
  car1.year = 2023;
  car1.color = "Red";
  car2.model = "Honda";
  car2.year = 2024;
  car2.color = "Blue";

  cout<<"Address of car model:"<<car1.model<<" is: "<<&car1<<"\n"; //actual address of car1
  printCar(car1); //the address which this func will print is different from actual address of car1
  
  printCarRef(car1); //the address which this func will print is same as actual address of car1

  paintCar(car1, "Silver");
  paintCar(car2, "Black");
  cout<<"\nAfter painting... \n";
  printCar(car1);
  printCar(car2);
  return 0;
}

void paintCar(Car &car, string color){ //while passing struct we must give address of car struct
  //otherwise it will create new car and paint that and original car will not be painted
  car.color=color;
}