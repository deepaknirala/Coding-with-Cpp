#include <iostream>
using namespace std;
int main() {

  string questions[]={
    "What year was C++ invented?",
    "Who invented C++?",
    "The constants in C++ are also known as?",
    "What is the size of int datatype in C++.",
    "Which of the following is scope resolution operator."};

  string options[][4]={
    {"A) 1980", "B) 1983", "C) 1990", "D) 1995"},
    {"A) Dennis Ritchie", "B) Bjarne Stroustrup", "C) James Gosling", "D) Brian Kernighan"},
    {"A) Literal", "B) Variable", "C) Constant", "D) Identifier"},
    {"A) 2 bytes", "B) 4 bytes", "C) 8 bytes", "D) 16 bytes"},
    {"A) ::", "B) .", "C) ->", "D) &"}};

  char answerkey[]={'B','B','C','B','A'};
  int size=sizeof(questions)/sizeof(questions[0]);
  char userAnswer;
  int score=0;
  cout<<"**********************************"<<endl;
  cout<<"Welcome to the C++ Quiz Game!"<<endl;
  cout<<"**********************************"<<endl;

  for(int i=0;i<size;i++){
    cout<<"Question "<<i+1<<": "<<questions[i]<<endl;
    for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++){
      cout<<options[i][j]<<'\n';
    }
    cin>>userAnswer;
    userAnswer=toupper(userAnswer);

    if(userAnswer==answerkey[i]){
      cout<<"CORRECT\n";
      score++;
    }
    else{
      cout<<"WRONG!\n";
      cout<<"Correct answer: "<<answerkey[i]<<'\n';
    }
  }
  cout<<"**********************************"<<endl;
  cout<<"             RESULTS              \n";
  cout<<"**********************************"<<endl;
  cout<<"Your score is "<<score<<"/"<<size<<endl;
  cout<<"Score : "<<(double)score/size*100<<"%"<<endl;
  
  return 0;
}