#include <iostream>
using namespace std;

/*Luhn Algorithm also known as "modulus 10" or "mod 10" algorithm
it is used to validate variety of identification numbers
like credit card numbers, IMEI numbers, etc.
-------------------------------------------------------------------
1. Double every second digit from the right to left.
   If doubled number is 2 digits, split them
2. Add all the single digits from step1
3. Add all odd numbered digits from right to left
4. Sum results from step 2 and step 3
5. If step 4 is divisible by 10 then NUMBER is valid
-------------------------------------------------------------------  
*/
int getDigit(const int number);
int sumOddDigits(const string cardNum);
int sumEvenDigits(const string cardNum);

int main() {
  string cardNum;
  int result=0;
  cout<<"Enter a credit card : ";
  cin>>cardNum;
  result=sumEvenDigits(cardNum)+sumOddDigits(cardNum);
  if(result%10==0){
    cout<<"This card number is valid.";
  }
  else{
    cout<<"This card number is NOT valid!";
  }
  return 0;
  
}

int getDigit(const int number){ //getting sum of two digits number 
  return number%10 +(number/10 % 10);
  return 0;
}

int sumOddDigits(const string cardNum){
  int sum=0;
  for(int i=cardNum.size()-1;i>=0;i-=2){ //total size-1 gives last position
    sum+=getDigit(cardNum[i]-'0');
  }
  return sum;
}

int sumEvenDigits(const string cardNum){
  int sum=0;
  for(int i=cardNum.size()-2;i>=0;i-=2){
    sum+=getDigit((cardNum[i]-'0')*2); //in ASCII,char '0' is 48 in dec so we can subtract eiether '0' or 48
  }
  return sum;
}
//to know the size of a string we can use .size() or .length() function
//both are same in C++