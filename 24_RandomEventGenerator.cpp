#include <iostream>
#include <ctime>
int main(){
  using namespace std;

  srand(time(0));//this func will use current time as seed to generate random no.
  int randNum=rand()%5 +1;  //this will give a no. only between 1 & 5
  switch(randNum){
    case 1: cout<<"You win a sticker!"<<endl; break;
    case 2: cout<<"You win a t-shirt!"<<endl; break;
    case 3: cout<<"You win a gift-card"<<endl; break;
    case 4: cout<<"You win a customized pen!"<<endl; break;
    case 5: cout<<"You win a keychain!"<<endl; break;
  }

  return 0;
}