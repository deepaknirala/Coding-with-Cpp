#include <iostream>

int main(){
  using namespace std;

  int num;
  int guess;
  int tries;
  srand(time(NULL));
  num=(rand()%100+1); //this will give a random no. only between 1 & 100
  cout<<"****** Welcome to the Number Guessing Game! ******"<<endl;
  
    cout<<"Guess a number between 1 and 100"<<endl;
    do{
      cout<<"enter your guess(1-100): ";
      cin>>guess;
      tries++;
      if(guess<num){
        cout<<"your guess is too low"<<endl;
      }
      else if (guess>num){
        cout<<"your guess is too high"<<endl;
      }
      else{
        cout<<"Congratulations! You guessed the number in "<<tries<<" tries."<<endl;
      }

    }while(guess!=num);
  
  return 0;
}