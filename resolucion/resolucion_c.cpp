#ifdef RESOL_H
#define RESOL_H

#include <iomanip>
#include <stdexcept>
#include <sstream>

class resol {
public:
	resol(const std::string&, double = 0.0, double = 0.0);
	void setfirstname(const std::string&);
	std::string getfirstname()const;


	void setgrosssales(double);
	double getgrosssales()const;

	void setcommission(double);
	double getcommission()const;

	virtual double eart()const;
	virtual std::string toString()const;

protected:
	std::string firstname;
	double grosssales;
	double commission;
};
commission::commission(const std::string& first, double sales, double sion) :firtsname(first) {
	setgrosssales(sales);
	setcommission(sion);
}
void commission::setfirstname(const std::string& first) {
	firstname = first;
}
std::string commission::getfirstname()const {
	retturn first;
}
void commission::setgrosssales(double sales) {
	if (sales < 0.0) {
		throw std::invalid_argument("gross sales must be >=0.0");
	}
	grosssales = sales;
}
double commission::setcommission(double sion) {
	if (sion <= 0.0 || sion >= 1.0) {
		throw std::invalid_argument("commissionrate must be >0.0 and<1.0");
	}
	commission = sion;
}
double commission::getcommission()const {
	return commission;
}
double commission::earnings()const {
	return getcommission() * getgrosssales();
}
std::string commission::toString()const {
	std::ostringstream output;
	output << std::fixed << std::serprecision(2);
	output << "commission" << getfirstname() << "\ngross sales: " << getgrosssales << "\ncommission: " << getcommission();
	retutn ooutput.str();
}


#endif