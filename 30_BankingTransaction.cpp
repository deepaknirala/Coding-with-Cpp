#include <iostream>
#include <iomanip>  // For std::setprecision
using namespace std;
int getValidInput();
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
  double balance = 30000.00; // Initial balance
  int choice = 0;
  do{
  cout<<"****************************************\n";
  cout<<"Enter your choice:\n";
  cout<<"****************************************\n";
  cout<<"1. Show balance\n";
  cout<<"2. Deposit Money\n";
  cout<<"3. Withdraw Money\n";
  cout<<"4. Exit\n";
  
  choice=getValidInput();
  cout<<choice<<endl;

  switch (choice){
    case 1: showBalance(balance);
            break;
    case 2: balance += deposit();
            showBalance(balance);
            break;
    case 3: balance = withdraw(balance);
            showBalance(balance);
            break;
    case 4: cout<<"Thanks for visiting!\n";
            break;
    default:
            cout<<"Invalid choice. Please try again.\n";
            break;
  }
  }while (choice != 4);
  return 0;
}


//std::setprecision(2)<<std::fixed  is used to set the precision of floating-point numbers to 2 decimal places.
void showBalance(double balance) {
  cout<<"Your current balance is: INR "<<setprecision(2)<<fixed<< balance<<endl;
}
double deposit() {
  double amount=0;
  cout<<"Enter the amount to deposit: INR ";
  cin>>amount;
  if(amount>0)  return amount;
  else{
    cout<<"Invalid deposit amount. Please try again.\n";
    return 0;
  }
}
double withdraw(double balance) {
  double amount=0;
  cout<<"Enter the amount to withdraw: INR ";
  cin>>amount;
  if (amount<=0){
    cout<<"Invalid withdrawal amount. Please try again.\n";
    return balance;
  }
  else if (amount > balance) {
    cout<<"Insufficient funds. Withdrawal denied.\n";
    return balance;
  } else {
    balance -= amount;
    cout<<"Withdrawal of INR "<<amount<<" successful. Current balance: INR "<<balance<<endl;
    return balance;
  }
}

int getValidInput() {
  int inp=0;
  cin>>inp;
  if(cin.fail()){     //if user enters letters mixed with numbers or any such invalid inputs
      cin.clear();
      cin.ignore(100,'\n');
      cout<<"Enter your choice again: ";
      cin>>inp;
    }
  //cin.clear();
  //cin.ignore(100,'\n');
  return inp;
}