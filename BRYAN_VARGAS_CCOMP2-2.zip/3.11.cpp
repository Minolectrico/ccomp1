#include <iostream>
#include <string>
#include "Motor_vehiculo.h"
using namespace std;
int main(){ 
    string marca;
    string tipo_combustible;
    int a�o_fabricacion;
    string color;
    int cilindrada;

    cout << "Ingrese marca del veh�culo: ";
    cin >> marca;
    cout << "Ingrese tipo de combustible del veh�culo: ";
    cin >> tipo_combustible;
    cout << "Ingrese a�o de fabricaci�n del veh�culo: ";
    cin >> a�o_fabricacion;
    cout << "Ingrese color del veh�culo: ";
    cin >> color;
    cout << "Ingrese la cilindrada del veh�culo: ";
    cin >> cilindrada;

    Motor_vehiculo vehiculo(marca,tipo_combustible,a�o_fabricacion,color,cilindrada);
    vehiculo.detalles_coche();
    
    return 0;
}
