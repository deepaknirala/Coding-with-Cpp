#include <iostream>

int main() {
using namespace std;
  string foods[5];//instead here we should allocate dynamically/vectors later will see
  int size=sizeof(foods)/sizeof(foods[0]);
  string temp;
  
  for(int i=0;i<size;i++){
    cout<<"Enter a food you like or 'q' to quit #"<<i+1<<". ";
    getline(cin,temp);
    if(temp=="q"){
      break;
    }
    else{
      foods[i]=temp;
    }
  }

  cout<<"You entered the following foods : "<<endl;
  for(int i=0;!foods[i].empty();i++){ //as when foods[i] is empty loop will fail n stop printing
    cout<<foods[i]<<'\n';
  }
  return 0;
}