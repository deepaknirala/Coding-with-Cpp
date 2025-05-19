#include <iostream>
using namespace std;
//a structure type variable can hold multiple related data of different types under one name
struct student{
  string name;
  float gpa;
  bool enrolled=true;//default value given to enrolled variable
};

int main() {
  student s1;
  s1.name = "Himanshu";// dot operator is also called member access operator
  s1.gpa = 3.5;

  student s2;
  s2.name="Simran";
  s2.gpa=3.8;

  student s3;
  s3.name="Abhishek";
  s3.gpa=3.2;
  s3.enrolled=false;

  cout<<"Student 1 "<<s1.name<<"\n";
  cout<<"GPA: "<<s1.gpa<<"\n";
  cout<<"currently enrolled(1=Yes, 0=No) : "<<s1.enrolled<<"\n";

  cout<<"Student 2 "<<s2.name<<"\n";
  cout<<"GPA: "<<s2.gpa<<"\n";
  cout<<"currently enrolled(1=Yes, 0=No) : "<<s2.enrolled<<"\n";

  cout<<"Student 3 "<<s3.name<<"\n";
  cout<<"GPA: "<<s3.gpa<<"\n";
  cout<<"currently enrolled(1=Yes, 0=No) : "<<s3.enrolled<<"\n";
  return 0;
}