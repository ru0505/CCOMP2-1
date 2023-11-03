#ifndef COMMISION_H
#define COMMISION_H
#include <string>
using namespace std;

class CommisionEmployee{
    public:
    CommisionEmployee(const  string&, const string&,const string&,double=0.0,double=0.0);

    void setprimernombre(const string&);
    string getprimernombre() const;

    void setapellido(const string&);
    string getapellido()const;

    void setnumerodeseguridad(const string&);
    string getnumerodeseguridad()const;

    void setgross(double );
    double getgross()const;

    void setcommision(double);
    double getcommision()const;

    double earnings()const;
    string tostring() const;

    private:

    string primernombre;
    string apellido;
    string numerodeseguridad;
    double gross;
    double commision;



};
#endif