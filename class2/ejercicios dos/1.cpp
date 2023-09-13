#include <iostream>
using namespace std;
#include "1.h"

void mostrarCuenta(Account cuentaAmostrar) {
    Account account1{"Jane Green", 50,"jane","green", 5};
     Account account2{"John Blue", -7,"jhon","blue",60};
 cout << "\n\naccount1: " << account1.getName() << " balance is $"
 << account1.getBalance();
 cout << "\naccount2: " << account2.getName() << " balance is $"
 << account2.getBalance();
}

int main()
 {
     Account account1{"Jane Green", 50,"jane","green", 8651324};
     Account account2{"John Blue", -7,"jhon","blue",8641246};
 
cout << "nombre de la cuenta 1: " << account1.getfirst() << " apellido  "
<< account1.getlast() << " numero de cuenta "<< account1.getbal();
 cout << "\nnombre de la cuenta 2: " << account2.getfirst() << " apellido "
 << account2.getlast()<< "  numero de cuenta  "<< account2.getbal() << endl;

 cout << "account1: " << account1.getName() << " balance is $"
<< account1.getBalance();
 cout << "\naccount2: " << account2.getName() << " balance is $"
 << account2.getBalance();

cout << "\n\nEnter deposit amount for account1: ";
int depositAmount;
cin >> depositAmount; 
cout << "adding " << depositAmount << " to account1 balance";
account1.deposit(depositAmount);

 cout << "\n\naccount1: " << account1.getName() << " balance is $"
 << account1.getBalance();
 cout << "\naccount2: " << account2.getName() << " balance is $"
 << account2.getBalance();


 cout << "\n\nEnter deposit amount for account2: "; 
 cin >> depositAmount; 
 cout << "adding " << depositAmount << " to account2 balance";
account2.deposit(depositAmount);


cout << "\n\naccount1: " << account1.getName() << " balance is $"
<< account1.getBalance();
cout << "\naccount2: " << account2.getName() << " balance is $"
<< account2.getBalance() << endl;


//  ola

cout << "\n\ncuanto dinero desea retirar: ";
int dinero;
cin >> dinero; 
cout << " quiere retirar " << dinero << " de la cuenta 1 ";
account1.retirodindecuenta(dinero);

cout << "\n\naccount1: " << account1.getName() << " balance is $"
<< account1.getBalance();
cout << "\naccount2: " << account2.getName() << " balance is $"
<< account2.getBalance() << endl;



cout << "\n\ncuanto dinero desea retirar: ";
cin >> dinero; 
cout << " quiere retirar " << dinero << " de la cuenta 1 ";
account2.retirodindecuenta(dinero);

cout << "\n\naccount1: " << account1.getName() << " balance is $"
<< account1.getBalance();
cout << "\naccount2: " << account2.getName() << " balance is $"
<< account2.getBalance() << endl;

// 
mostrarCuenta(account2);

}
