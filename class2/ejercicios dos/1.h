#include <string>
#include <iostream>
using namespace std;

 class Account {
 public:
 
 Account( string accountName, int initialBalance,string firstname,string lastname,unsigned int balances)
 : name{accountName}, first{firstname},last{lastname},bal{balances}{ 

if (initialBalance > 0) { 
balance = initialBalance;

 }
 }
void deposit(int depositAmount) {
if (depositAmount > 0) { 
balance = balance + depositAmount; 
}
}int getBalance() const {
return balance;
}

unsigned int getbal() const {
return bal;
}

void setbal(unsigned int balances) {
bal = balances;
}
 

void setfirst(string firstname) {
first = firstname;
}


string getfirst() const {
return first;
}

void setlast(string lastname) {
last = lastname;
}


string getlast() const {
return last;
}


void setName(string accountName) {
name = accountName;
}


string getName() const {
return name;
}
void retirodindecuenta(int inicio){
   if (inicio<= balance){
    balance = balance - inicio;
   }else{
    cout <<"El importe retirado excede el saldo de la cuenta :c"<< endl;
   }

}

void accountNumber(int accountNumber) {
if (accountNumber > 0) { 
balance = balance + accountNumber; 
}
}
private:
string name;
int balance{0};
unsigned int bal;
string first;
string last;
};