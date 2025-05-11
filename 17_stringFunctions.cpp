#include <iostream>
#include <string>
//some useful string functions
int main(){
  using namespace std;
  string name, nickname;
  cout<<"Enter your full name: ";
  //getline() function is used to read a string with spaces
  //cin>>name; // this will not work if name has spaces
  getline(cin,name);

  if (name.empty()){  //1) .empty() method checks if string is empty
    cout<<"You did not enter a name."<<endl;
  }
  else if(name.length()<3){   //2) .length() method returns length of string
    cout<<"Your name is too short."<<endl;
  }
  else if(name.length()>16){ 
    cout<<"You name is too long."<<endl;
  }
  else{
    cout<<"Welcome "<<name<<endl;
  }
  //3) .find() method return the index of first occurrence of the character
  //if character is not found, it returns string::npos
  cout<<"first space in your name is at index: "<<name.find(' ')<<endl;
  name.clear(); //4) .clear() method clears the string stored in name var
  cout<<"Enter your first name only: ";
  cin>>name;
  name.append(".dev@gmail.com"); //5) .append() method appends string to the end of name
  cout<<"Your username is: "<<name<<endl;
  
  //6) .at(0) returns the first character(at 0th index) of the string
  cout<<"Your passkey is: "<<name.at(0)<<name.at(2)<<"125"<<endl;
  
  cout<<"Enter your nickname: ";
  cin>>nickname;
  nickname.insert(0,"@"); //7) .insert() method inserts string at the specified index-here at 0th index
  cout<<"Your social handle is: "<<nickname<<endl;
  //8) erase() method erases the string from the specified index-here from 0th index to 1st index
  cout<<"Bye "<<nickname.erase(0,1)<<"!"<<endl; //this will erase first indec character

  //ref: cplusplus.com/reference/string/
  return 0;
}