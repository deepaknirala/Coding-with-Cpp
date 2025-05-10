#include <iostream>

int main(){
using namespace std;
// Logical Operators returns true or false
// && logical AND
// || logical OR
// ! logical NOT

int temp;
bool sunny=false;
cout<<"Enter temperature: ";
cin>>temp;

if(temp<5 || temp>35){
  cout<<'\n'<<"The temperature is bad!";
}
else{
  cout<<"The temperature is good!";
}
if (!sunny){
cout<<'\n'<<"The weather is cloudy!";
}
else{
  cout<<'\n'<<"The weather is sunny!";
}
  return 0;
}