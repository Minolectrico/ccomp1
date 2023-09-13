#include <iostream>
#include "ferreteria.h"
using namespace std;
int main() {
  string numero_pieza;
  string descripcion;
  int cantidad;
  int precio;
  cout<<"cuantas piezas deseas :";
  cin>>numero_pieza;
  cout<<"su descricion es: ";
  cin>>descripcion;
  cout<<"la cantidad es?: ";
  cin>>cantidad;
  cout<<"el precio es: ";
  cin>>precio;
  Factura factura(numero_pieza,descripcion,cantidad,precio);
  cout<<"numero de piezas: "<<factura.getnumero_pieza()<<endl;
  cout<<"descripcion: "<<factura.getdescripcion()<<endl;
  cout<<"cantidas: "<<factura.gestcantidad()<<endl;
  cout<<"precio: "<<factura.getprecio()<<endl;
  cout<<"Tasa de IVA: "<<factura.getimpuesto()<<endl;
  cout<<"descuento: "<<factura.getdescuento()<<endl;
  cout<<"Monto de la factura: "<<factura.getobtenermontofactura()<<endl;  
}
