#include <string>
#include <iostream>
using namespace std;

class Factura {
    public:
     Factura( string pieza,string descriptionpiez,int cantidaddecompra, int cantidadarticulo,double iva, double descuento)
 :pez{pieza}, des{descriptionpiez} , cantico{cantidaddecompra} , cantiar {cantidadarticulo},iva {iva},descu {descuento} 
  {  if (iva = 0.20) { 
iva = iva;
 }if (descuento = 0) { 
descu = descuento;
 }
 }

string getpieza() const {
    return pez;
}
void setpez(string pieza) {
pez = pieza;
}

string getdescriptionpiez() const {
    return des;
}
void setdes(string descriptionpiez) {
des = descriptionpiez;
}


int getcantidaddecompra() const {
    return cantico;
}
void setcantico(int cantidaddecompra) {
cantico = cantidaddecompra;
}


int getcantidadarticulo() const {
    return cantiar;
}
void setcantiar(int cantidadarticulo) {
cantiar = cantidadarticulo;
}


double getiva() const {
    return iva;
}
void setiva(double iva) {
iva = iva;
}


double getdescuento() const {
    return descu;
}
void setdescu(double descuento) {
descu = descuento;
}

void getInvoiceAmount(int suma) {
    // suma = pez*destroy;
    // suma = suma + pez;

}

private:
   string pez;
   string des;
   int cantico;
   int cantiar;
   double iva;
   double descu;
};
