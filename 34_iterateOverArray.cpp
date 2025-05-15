#include <iostream>

int main() {
  char grade[] = {'A', 'B', 'C', 'D', 'E', 'F'};
  for(int i=0;i<sizeof(grade)/sizeof(char);i++){
    std::cout<<grade[i]<<"\n";
  }
  return 0;
}
