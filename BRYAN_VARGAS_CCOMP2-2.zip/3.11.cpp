#include <iostream>
#include <string>
#include "Motor_vehiculo.h"
using namespace std;
int main(){ 
    string marca;
    string tipo_combustible;
    int año_fabricacion;
    string color;
    int cilindrada;

    cout << "Ingrese marca del vehículo: ";
    cin >> marca;
    cout << "Ingrese tipo de combustible del vehículo: ";
    cin >> tipo_combustible;
    cout << "Ingrese año de fabricación del vehículo: ";
    cin >> año_fabricacion;
    cout << "Ingrese color del vehículo: ";
    cin >> color;
    cout << "Ingrese la cilindrada del vehículo: ";
    cin >> cilindrada;

    Motor_vehiculo vehiculo(marca,tipo_combustible,año_fabricacion,color,cilindrada);
    vehiculo.detalles_coche();
    
    return 0;
}
