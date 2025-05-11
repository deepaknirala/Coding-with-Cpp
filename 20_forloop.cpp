#include <iostream>

int main(){
  using namespace std;
  int num;

  for(int i=1;i<=5;i++){
    cout<<i<<'\n';
  }
  cout<<"Even number below 20 are: ";
  for(num=20;num>0;num-=2){
    cout<<num<<" ";
  }
  return 0;
}