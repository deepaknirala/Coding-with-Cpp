#include <iostream>
  using namespace std;

//function is a block of reusable code that performs a specific task
// we have to declare function before main() if we call it in main
//& we may define it after main
//-------------------------------------------------------
//OR simply we can declare n define it before main
//-------------------------------------------------------
void happyBirthday(string name, int age); //funtion declaration

int main(){
  string name;
  int age;
  cout<<"Enter your name: ";
  cin>>name;
  cin.ignore(25,'\n');//if user give full name, it will only take first name till space
  
  cout<<"Enter your age: ";
  cin>>age;
  happyBirthday(name,age);  //function call

  return 0;
}

//function definition
void happyBirthday(string name, int age){
  cout<<"Happy Birthday "<<name<<'\n';
  cout<<"Happy Birthday to you dear "<<name<<"!"<<'\n';
  cout<<"You are "<<age<<" years old now!\n";
}