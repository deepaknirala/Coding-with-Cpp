#include <iostream>
using namespace std;

int main() {
  double val=3.14;
  string name="Dijikstra";
  bool flag=true;
  char grade[]={'A', 'B', 'C', 'D', 'E', 'F'};
  
  //sizeof operator returns the size of the datatype in bytes
  cout<<"size of val is "<<sizeof(val)<<" bytes\n"; //8 bytes
  cout<<"size of string datatype is "<<sizeof(string)<<" bytes\n"; //32 bytes
  cout<<"size of boolean datatype is "<<sizeof(flag)<<" bytes\n"; //1 bytes

  cout<<"No. of elements in grade array is "<<sizeof(grade)/sizeof(char)<<" bytes\n"; //6 bytes

  return 0;
}