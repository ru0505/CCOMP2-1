#include <iomanip>
#include <stdexcept>
#include <sstream>

#include "commision.h"
using namespace std;

CommisionEmployee::CommisionEmployee(const string& primero, const string& segundo,const string&ssn, double sales, double rate){
   primernombre=primero;
   apellido=segundo;
   numerodeseguridad=ssn;
   setgross(sales);
   setcommision(rate);
}

void CommisionEmployee::setprimernombre(const string& primero){
    primernombre= primero;
}
string CommisionEmployee::getprimernombre()const {return primernombre;}

void CommisionEmployee::setapellido(const string& segundo){
    apellido=segundo;
}

string CommisionEmployee::getapellido() const {return apellido;}

void CommisionEmployee::setnumerodeseguridad(const string & ssn){
    numerodeseguridad=ssn;
}
string CommisionEmployee::getnumerodeseguridad()const {
    return numerodeseguridad;
}
void CommisionEmployee::setgross(double sales){
    if (sales<0.0){
        throw invalid_argument("gross sales must be >=0.0");
    }gross=sales;
}

double CommisionEmployee::getgross()const {return gross;}

void CommisionEmployee::setcommision(double rate){
    if(rate <=0.0 || rate >=1.0){
        throw invalid_argument("commision rate must be <0.0 and >1.0");
    }commision=rate;
}
double CommisionEmployee::getcommision()const{
    return commision;
}

double CommisionEmployee::earnings()const{
    return commision * gross;
}

string CommisionEmployee::tostring() const {
 ostringstream output;
 output << fixed << setprecision(2); // two digits of precision
 output << "commission employee: " << primernombre << " " << apellido
 << "\nsocial security number: " << numerodeseguridad
 << "\ngross sales: " << gross
 << "\ncommission rate: " << commision;
 return output.str();
}