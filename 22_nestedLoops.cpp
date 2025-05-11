#include <iostream>

int main(){
  using namespace std;

  int rows,cols;
  char symbol;
  cout<<"Enter the number of rows: ";
  cin>>rows;
  cout<<"Enter the number of columns: ";
  cin>>cols;
  cout<<"Enter a symbol to use: ";
  cin>>symbol;
//nested loop
  for(int i=1;i<=rows;i++){   //outer loop shows no. of rows
    for(int j=1;j<=cols;j++){ //inner loop shows no. of columns
      cout<<symbol<<' ';
    }
    cout<<endl;
    }
  return 0;
}