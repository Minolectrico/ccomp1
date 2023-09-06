#include <iostream>
using namespace std;
int main() {
  float pi=3.14;
  int radio=0;
  cout<<"Cual es el radio del circulo: " ;
  cin>>radio;

  float diametro= radio*2;
  float circunferencia= 2*pi*radio;
  float area=pi*radio*radio;
  cout<< "El diametro es: "<<diametro<<endl;
  cout<< "La circunferencia es: "<<circunferencia<<endl;
  cout<< "El area es: "<<area<<endl;
}
