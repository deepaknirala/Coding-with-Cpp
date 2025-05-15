#include <iostream>
using namespace std;

int main() {
  //array of 5 strings declared and initialized
  string car[]= {"BMW", "Mercedes", "Audi", "Porsche", "Lamborghini"};

  int id[5];//Array of 5 integers declared
  id[0]= 111; //assigning value to first element 

  cout<<car<<endl;//this prints starting address of array
  cout<<car[1]<<endl;//this prints second element of car array
  cout<<id[0]<<endl;
  cout<<id[1]<<endl;//this prints garbage value as id[1] is not initialized
  return 0;
}