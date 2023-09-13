#include <iostream>
#include "Fecha.h"

int main()
{
    int dia;
    int mes;
    int año;

    std::cout << "Ingrese el dia por favor: ";
    std::cin >> dia;
    std::cout << "Ingrese el mes por favor: ";
    std::cin >> mes;
    std::cout << "Ingrese el año por favor: ";
    std::cin >> año;
    
    Fecha cumple(dia, mes, año);
    cumple.mostrar_fecha();

    return 0;
}
