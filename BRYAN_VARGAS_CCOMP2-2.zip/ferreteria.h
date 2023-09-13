#include <string>
class Factura {
public:
  Factura(std::string np,std::string des,int can,int   pr):numero_pieza(np),descripcion(des),cantidad(can),precio(pr),impuesto(0.2),descuento(0){
  }
void setnumero_pieza(std::string np){
  numero_pieza=np;
}
std::string getnumero_pieza()const{
  return numero_pieza;
}
void setdescripcion(std::string des){
  descripcion=des;
}
std::string getdescripcion()const{
  return descripcion;
}
void setcantidad(int can){
  if(can>0){
    cantidad=can;
  }
}
int gestcantidad()const{
  return cantidad;
}

void setprecio(int pr){
  if(pr>0){
    precio=pr;
  }
}
int getprecio()const{
  return precio;
}
void setimpuesto(double im){
  if(im>0){
    impuesto=im;
  }
}
double getimpuesto()const{
  return impuesto;
}
void setdescuento(double cuen){
  if(cuen>-1){
    descuento=cuen;
  }
}
double getdescuento()const{
  return descuento;
}
double getobtenermontofactura()const{
  double multi=cantidad*precio;
  double impuesto1=multi*impuesto;
  double descuento1=multi*descuento;
  return multi+impuesto1-descuento1;
}
private:
  std::string numero_pieza;
  std::string descripcion;
  int cantidad;
  int precio;
  double impuesto ;
  double descuento ;
};
