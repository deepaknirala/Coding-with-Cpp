#include <iostream>
#include <ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
  char player;
  char computer;
  player = getUserChoice();
  cout<< "You choose: " ;
  showChoice(player);
  computer = getComputerChoice();
  cout<< "Computer's choice: " ;
  showChoice(computer);
  chooseWinner(player, computer);
  return 0;
}

char getUserChoice(){
  char player;
  cout<< "Rock-Paper-Scissors Game" << endl;
  do{
  cout<<"****************************" << endl;
  cout<< "Choose one of the following"<<endl;
  cout<< "R for Rock" << endl;
  cout<< "P for Paper" << endl;
  cout<< "S for Scissors" << endl;
  cout<< "****************************" << endl;
  cin>>player;
  }while(player != 'R' && player != 'P' && player != 'S');
  return player;
}
char getComputerChoice(){
  srand(time(0));
  int num=rand()%3+1;
  switch(num){
    case 1:
      return 'R';
    case 2:
      return 'P';
    case 3:
      return 'S';
  }
  return 0;
}
void showChoice(char choice){
  switch(choice){
    case 'R':
      cout<< "Rock" << endl;
      break;
    case 'P':
      cout<< "Paper" << endl;
      break;
    case 'S':
      cout<< "Scissors" << endl;
      break;
    default:
      cout<< "Invalid choice" << endl;
  }
}
void chooseWinner(char player, char computer){
  switch(player){
    case 'R': if(computer=='R'){
                cout<< "It's a tie!\n";
              }
              else if(computer=='P'){
                cout<< "Computer wins!\n";
              }
              else{
                cout<< "You win!\n";
              }
              break;
    case 'P': if(computer=='R'){
                cout<< "You win!\n";
              }
              else if(computer=='P'){
                cout<< "It's a tie!\n";
              }
              else{
                cout<< "Computer wins!\n";
              }
              break;
    case 'S': if(computer=='R'){
                cout<< "You lose!\n";
              }
              else if(computer=='P'){
                cout<< "You win!\n";
              }
              else{
                cout<< "It's a tie!\n";
              }
              break;

  }
}