#include <iostream>
#include <cmath>

int main(){
  using namespace std;
  double num1, num2, result;
  char operation,choice='y';
  cout<<"This calculator can do addition(+),subtaction(-)"<<'\n'<<"multiplication(*),division(/)"<<'\n'<<"modulus(%),power(^),root(r) eg. 25 r 2 = 5"<<endl;
  cout<<"Enter value1 operation value2 and press enter."<<endl;
  cout<<"for example: 2 + 3  or 64 r 2 "<<'\n';
  cout<<"Enter your expression to start calculation: "<<'\n';
  while(1){
    cin>>num1>>operation>>num2;
    cin.ignore(100,'\n'); //to ignore any other inputs after the second value
    if(cin.fail()){
      cout<<"Invalid input!"<<'\n'<<"...exiting!"<<endl;
      return 0;}
    cin.clear(); //cleaning the input buffer to avoid issue with next input
    
    switch(operation){
        case '+':
        result = num1 + num2;
        cout<<num1<<operation<<num2<<" = "<<result<<endl;
        break;
        case '-':
        result = num1 - num2;
        cout<<num1<<operation<<num2<<" = "<<result<<endl;
        break;
        case '*':
        result = num1 * num2;
        cout<<num1<<operation<<num2<<" = "<<result<<endl;
        break;
        case '/':
        result = num1 / num2;
        cout<<num1<<operation<<num2<<" = "<<result<<endl;
        break;
        case '%':
        result = int(num1) % int(num2);
        cout<<num1<<operation<<num2<<" = "<<result<<endl;
        break;
        case '^':
        result = pow(num1, num2);
        cout<<num1<<" to the power "<<num2<<" = "<<result<<endl;
        break;

        case 'r': //rth root of num2
          if(num2==0){
            cout<<"Undefined!"<<endl;
            break;}
        result = pow(num1,1/num2);
          if (num2==2){
            cout<<"sqr root of "<<num1<<" = "<<result<<endl;}
          else if (num2==3){
            cout<<"cube root of "<<num1<<" = "<<result<<endl;}
          else {
            cout<<num2<<"th root of "<<num1<<" = "<<result<<endl;}
        break;

        default:
        cout<<"Invalid operation!"<<endl;
        break;
      }
      
      cout<<"To continue press y, otherwise anykey to exit : "<<endl;
      //char choice;
      cin>>choice;
      if(choice=='y' || choice=='Y'){
        cout<<"continuing the calculator!"<<endl;
        cout<<"ReEnter your expression to start calculation: "<<'\n';
      }
      else{
        cout<<"Quitting the calculator! Thank you :)"<<endl;
        return 0;
      }
  }
  return 0;
}
