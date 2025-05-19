#include <iostream>
using namespace std;

//constructor is a special member function of a class that is automatically called
//when an object of class is created
//it is useful for assigning values to data members of the class
//constructor has same name as class name and doesnot have any return type

class Student{
    public: //public access modifier
    string name;
    int age;
    float gpa; //gpa out of 10

    Student(string name, int age, float gpa){//constructor
        this->name=name; //this->name is the name of the data member and after = name is whatever parameter is passed
        this->age=age; //this keyword is used when we have same name for parameter and data member
        this->gpa=gpa;
      }
  /*Student(string x, int y, float z){ //constructor
        name=x; //if paramenters name and attributes are not same, 
        age=y; //we don't need to use this keyword (this->)
        gpa=z;
      }    */
};


int main() {
  Student s1("Sidharth", 25, 9.0);// we don't need to add these values to object of Student class, constructor will do it for us
  //Student s1; //this will not work as constructor is not default constructor
  
  Student s2("Praveen", 25, 8.5);
  Student s3("Amrita", 26, 9.5);

  cout<<"Name: "<<s1.name<<endl;
  cout<<"Age: "<<s1.age<<endl;
  cout<<"GPA: "<<s1.gpa<<endl;
  cout<<"----------------------------------------\n";
  cout<<"Name: "<<s2.name<<endl;
  cout<<"Age: "<<s2.age<<endl;
  cout<<"GPA: "<<s2.gpa<<endl;
  cout<<"----------------------------------------\n";
  cout<<"Name: "<<s3.name<<endl;
  cout<<"Age: "<<s3.age<<endl;
  cout<<"GPA: "<<s3.gpa<<endl;

  return 0;
}