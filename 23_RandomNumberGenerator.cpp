#include <iostream>
#include <ctime>
int main(){
  using namespace std;
  srand(time(NULL));// Seed the random number generator with the current time
  //using time(NULL) it avoids generating the same sequence of random no. every time it runs
  
  //Suppose we are rolling 3 dices at once
  int num1=(rand()%6)+1;
  //added 1 to make it between 1 and 6 
  //bcz rand() generates value between 0 to 5
  int num2=(rand()%6)+1;
  int num3=(rand()%6)+1;

  cout<<"dice1 : "<<num1<<endl;
  cout<<"dice2 : "<<num2<<endl;
  cout<<"dice3 : "<<num3<<endl;
  
  return 0;
}