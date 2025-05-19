#include <iostream>
using namespace std;
/* Dynamic Memory Allocation=memory allocation after program already compiled
  and running. Using 'new' operator to allocate memory in heap rather than stack.
  it is useful when we don't know how much memory we will need especially when
  accepting user input.
  whenever we use 'new' operator, we should also use 'delete' operator to
  deallocate the memory. Otherwise, it will cause memory leak.  */

int main() {
  cout<<"Here is two example program of dynamic memory allocation!"<<endl;
  cout<<"To run program 1, press 1 OR to run program 2, press 2: ";
  int choice;
  cin>>choice;
  if (choice==1){
    //program 1
  int *pNum=NULL;
  pNum=new int; //new operator allocates memory in heap and returns the address
  *pNum=21; //assigning value to the address
  cout<<"address of pNum: "<<pNum<<endl;
  cout<<"value of pNum: "<<*pNum<<endl;
  delete pNum; //deallocating memory to avoid memory leak
  }

  else if(choice==2){
    //program 2
  char *pGrades=NULL;
  int size;
  cout<<"How many grades do you want to enter? ";
  cin>>size;
  pGrades=new char[size]; //allocating memory dynamically at runtime
  
  for(int i=0;i<size;i++){
    cout<<"Enter grade "<<i+1<<": ";
    cin>>pGrades[i]; //assigning value to the each index of array
    pGrades[i]=toupper(pGrades[i]); //converting to uppercase
  }
  for(int i=0;i<size;i++){
    cout<< "Grade of Student"<<i+1<<": "<<pGrades[i]<<endl; //printing the values
  }
  delete[] pGrades; //deallocating memory to avoid memory leak
  cout<<"address of pGrades: "<<pGrades<<endl; //it may show garbage value bcz pointer is now pointing to some invalid location
  cout<<"value of pGrades: "<<*pGrades<<endl; //it may shows no value or garbage sometime bcz previous allocated memory is now deallocated
  
  pGrades=NULL; //to avoid dangling pointer, we can set it to NULL
  cout<<"address of pGrades: "<<pGrades<<endl; //it shows pointer is now pointing to NULL
  }
  else{
    cout<<"Invalid choice!"<<endl;
  }

  return 0;
}