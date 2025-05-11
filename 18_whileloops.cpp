#include <iostream>
#include <string>

int main(){
  using namespace std;
  string name;

  while(name.empty()){ //until user give any input it will keep asking
    cout<<"Enter your name: ";
    getline(cin,name);    
  }

  return 0;
}