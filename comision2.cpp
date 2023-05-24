#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "comission.h" 
using namespace std;



Commissionemployee::Commissionemployee(const string& first,
 const string& last, const string& ssn, double sales, double rate) {
 firstName = first; // should validate
 lastName = last;
 socialSecurityNumber = ssn; // should validate
 setGrossSales(sales); // validate and store gross sales
 setCommissionRate(rate); // validate and store commission rate
} 

void Commissionemployee::setFirstName(const string& first) {
firstName = first; // should validate
}


string Commissionemployee::getFirstName() const {return firstName;}


void Commissionemployee::setLastName(const string& last) {
lastName = last; // should validate
}


string Commissionemployee::getLastName() const {return lastName;}

void Commissionemployee::setSocialSecurityNumber(const string& ssn) {
socialSecurityNumber = ssn; 
}


string Commissionemployee::getSocialSecurityNumber() const {
return socialSecurityNumber;
}


void Commissionemployee::setGrossSales(double sales) {
if (sales < 0.0) {
throw invalid_argument("Gross sales must be >= 0.0");
}

grossSales = sales;


double Commissionemployee::getGrossSales()const{return grossSales;}


void Commissionemployee::setCommissionRate(double rate) {
if (rate <= 0.0 || rate >= 1.0) {
throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
}

commissionRate = rate;
}
double Commissionemployee::getCommissionRate() const {
return commissionRate;
}

Fig. 11.5 | Implementation file for CommissionEmployee class that represents an employee who
is paid a percentage of gross sales. (Part 3 of 3.)
// calculate earnings
double Commissionemployee::earnings() const {
 return commissionRate * grossSales;
}
// return string representation of CommissionEmployee object
string Commissionemployee::toString() const {
 ostringstream output;
 output << fixed << setprecision(2); // two digits of precision
 output << "commission employee: " << firstName << " " << lastName
 << "\nsocial security number: " << socialSecurityNumber
 << "\ngross sales: " << grossSales
 << "\ncommission rate: " << commissionRate;
 return output.str();
}