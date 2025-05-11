#include <iostream>

int main(){
  using namespace std;
  //break
  for(int i=1;i<=10;i++){
    if(i==5){
      break; //break out of loop as when i=5
    }
    cout<<i<<" ";
  }
  cout<<'\n';
  //continue 
  for(int j=11;j<=20;j++){
    if(j==15) continue; //skip the loop when j=15 and continue to next iteration
    cout<<j<<" ";
  }

  return 0;
}