#include <iostream>
using namespace std;
//enum is user-defined data type consists of paired named-integer constants

enum Day{Sunday=1,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
enum Color{Red,Green,Blue,Yellow};//implicitly starts from 0
enum planets{//associated integer is size of planets in km
  Mercury=4880,
  Venus=12104,
  Earth=12756,
  Mars=6792,
  Jupiter=142984,
  Saturn=108728,
  Uranus=51118,
  Neptune=49532
};
int main() {
  Day today=Monday;
  switch(today){
    case Sunday:
      cout<<"Today is Sunday";
      break;
    case Monday:
      cout<<"Today is Monday";
      break;
    case Tuesday:
      cout<<"Today is Tuesday";
      break;
    case Wednesday:
      cout<<"Today is Wednesday";
      break;
    case Thursday:
      cout<<"Today is Thursday";
      break;
    case Friday:
      cout<<"Today is Friday";
      break;
    case Saturday:
      cout<<"Today is Saturday";
      break;
  }
  return 0;
}