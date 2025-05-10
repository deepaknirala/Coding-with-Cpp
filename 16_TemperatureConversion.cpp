#include <iostream>

int main(){
  using namespace std;
  double temp;
  char unit;
  cout<<"*************Temperature Conversion*************"<<endl;
  cout<<"F=Fahrenheit, C=Celsius, K=Kelvin"<<endl;
  cout<<"Enter temperature and unit (eg: 35 C): ";
  cin>>temp>>unit;
  cin.ignore(25,'\n');
  cin.clear();
  
  if(unit=='F' || unit=='f'){
    cout<<"Temperature in Celsius: "<<(temp-32)*5/9<<endl;
    cout<<"Temperature in Kelvin: "<<(temp-32)*5/9+273.15<<endl;
  }
  else if (unit=='C' || unit=='c'){
    cout<<"Temperature in Fahrenheit: "<<temp*9/5+32<<endl;
    cout<<"Temperature in Kelvin: "<<temp+273.15<<endl;
  }
  else if (unit=='K' || unit=='k'){
    cout<<"Temperature in Fahrenheit: "<<(temp-273.15)*9/5+32<<endl;
    cout<<"Temperature in Celsius: "<<temp-273.15<<endl;
  }
  else{
    cout<<"Invalid unit!"<<endl;
  }
  cout<<"***********************************************"<<endl;
  return 0;
}