#include <iostream>
using namespace std;
//Abstraction = hiding unnecessary data from outside a class
//getters = functions that makes a private attribute READABLE
//setters = functions that makes a private attribute WRITABLE

class Stove{
  private: // private access modifier
        int temperature=0;  // private attribute
  public:
        int getTemperature(){ //getter function that makes the private attribute readable
          return temperature;
        }

        void setTemperature(int temperature){ //setter function that makes private attribute writable
          if(temperature<0){
            this->temperature=0;
          }
          else if(temperature>=10){
            this->temperature=10;
          }
          else{
            this->temperature=temperature;//using this keyword, accessing and modifying pvt attribute via setter function
          }
        }
      //we can also invoke setters within a constructor
      Stove(int temperature){
        setTemperature(temperature);
      }
};

int main() {
  Stove stove(0); //calling constructor function of class with intitial temperature
  
  //stove.temperature=100000;// Error: temperature is private attribute, can't access it directly
  cout<<"The temperature setting is: "<<stove.getTemperature()<<endl; //correct way to access pvt attribute is by calling getter function
  cout<<"Let's change temperature setting as you like(0 to 10): ";
  int temp;
  cin>>temp;
  stove.setTemperature(temp); //correct way to modify pvt attribute is by calling setter function
  cout<<"The final temperature setting is: "<<stove.getTemperature(); //correct way to access pvt attribute is by calling getter function
  return 0;
}