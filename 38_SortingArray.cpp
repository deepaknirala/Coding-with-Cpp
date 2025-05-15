#include <iostream>

void sortArray(int array[], int size);

int main() {
  int arr[]={10,1,9,2,8,3,7,4,6,5};
  int size=sizeof(arr)/sizeof(arr[0]);
  sortArray(arr,size);
  std::cout<<"Sorted array!\n";
  for(int y:arr){
    std::cout<<y<<" ";
  }
  return 0;
}
//bubble sort algo
void sortArray(int array[], int size){
  int temp=0;
  for(int i=0;i<size-1;i++){
    for(int j=0;j<size-i-1;j++){
      if(array[j]>array[j+1]){
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
      }
    }
  }
}
