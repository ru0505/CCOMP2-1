#include <iostream>
#include <iomanip>
#include "comission.h" // CommissionEmployee class definition
using namespace std;

int main() {

 Commissionemployee employee{"Sue", "Jones", "222-22-2222", 10000, .06};


cout << fixed << setprecision(2); // set floating-point formatting
cout << "Employee information obtained by get functions: \n"
<< "\nFirst name is " <<employee.getFirstName()
<< "\nLast name is " <<employee.getLastName()
<< "\nSocial security number is "
<< employee.getSocialSecurityNumber()
<< "\nGross sales is " <<employee.getGrossSales()
<< "\nCommission rate is " <<employee.getCommissionRate() << endl;

employee.setGrossSales(8000);
employee.setCommissionRate(.1); 
cout << "\nUpdated employee information from function toString: \n\n"
<< employee.toString() ;


cout << "\n\nEmployee's earnings: $" << employee.earnings()<< endl;
} 