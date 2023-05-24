#ifndef COMMISSION_H
#define COMMISSION_H
#include <string> // C++ standard string class

class Commissionemployee{
public:
Commissionemployee(const std::string&, const std::string&,
 const std::string&, double = 0.0, double = 0.0); 

void setFirstName(const std::string&); 
std::string getFirstName() const; 

void setLastName(const std::string&); 
std::string getLastName() const; 

void setSocialSecurityNumber(const std::string&); 
std::string getSocialSecurityNumber() const; 

void setGrossSales(double); 
double getGrossSales() const; 
void setCommissionRate(double); 
double getCommissionRate() const; 

double earnings() const; 
std::string toString() const; 
private:
std::string firstName;
std::string lastName;
std::string socialSecurityNumber;
double grossSales; 
double commissionRate; 
};

#endif