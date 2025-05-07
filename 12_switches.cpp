#include <iostream>

int main(){
using namespace std;
  cout<<"for months program enter 1 or for grade program enter 2: ";
  int choice;
  cin>>choice;
  if (choice==1){
    cout<<"let's find the month name"<<'\n';

  int month;
  cout<<"Enter the month no. (1-12): ";
  cin>>month;

  switch(month){
    case 1:
    cout<<"January"<<'\n';
    break;
    case 2:
    cout<<"Febrauary"<<'\n';
    break;
    case 3:
    cout<<"March"<<'\n';
    break;
    case 4:
    cout<<"April"<<'\n';
    break;
    case 5:
    cout<<"May"<<'\n';
    break;
    case 6:
    cout<<"June"<<'\n';
    break;
    case 7:
    cout<<"July"<<'\n';
    break;
    case 8:
    cout<<"August"<<'\n';
    break;
    case 9:
    cout<<"September"<<'\n';
    break;
    case 10:
    cout<<"October"<<'\n';
    break;
    case 11:
    cout<<"November"<<'\n';
    break;
    case 12:
    cout<<"December"<<'\n';
    break;
    default:
    cout<<"Invalid month"<<'\n';
  }
}else if (choice==2){
  cout<<"let's find the grade"<<'\n';
  
  char grade;
  cout<<"Enter the grade (A, B, C, D, F): ";
  cin>>grade;

  switch(grade){
    case 'A':
    case 'a': //more than one case can be used for same output
    //if the user enters a or A, it will give the same output
    //this is called fall through used to combine multiple cases 
    cout<<"Excellent"<<'\n';
    break;

    case 'B': case 'b':
    cout <<"Good"<<'\n';
    break;
    case 'C': case 'c':
    cout<<"Average"<<'\n';
    break;
    case 'D': case 'd':
    cout<<"Poor"<<'\n';
    break;
    case 'E': case 'e':
    cout<<"Satisfactory"<<'\n';
    break;
    case 'F': case 'f':
    cout<<"Fail"<<'\n';
    break;
    default:
    cout<<"Invalid grade"<<'\n';

  }
}
else{
  cout<<"Only 1 or 2 is allowed"<<'\n';
  cout<<"Exiting the program"<<'\n';
}

  return 0;
}