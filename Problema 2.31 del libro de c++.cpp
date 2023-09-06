#include <iostream>
using namespace std;
int main() {
 	float media_km_galon;
  float coste_galon;
  float km_d;
  float tarifa_dia;
  float peaje;
  float coste_diario;
  cout << "Ingrese la cantidad de millas que recorre a diario : ";
  cin >> km_d;
  cout << "Ingrese el coste del galón: ";
  cin >> coste_galon;
  cout << "Ingrese la tarifa diaria de aparcamiento: ";
  cin >> tarifa_dia;
  cout << "Ingrese el coste del peaje: ";
  cin >> peaje;
  media_km_galon = km_d/coste_galon;
  coste_diario = media_km_galon + tarifa_dia + peaje;
  cout << "\nEl costo total a diario que usted hace es " <<coste_diario << " soles" <<endl;
}
