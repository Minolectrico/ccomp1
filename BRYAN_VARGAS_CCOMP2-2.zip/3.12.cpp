#include <iostream>
#include "Fecha.h"

int main()
{
    int dia;
    int mes;
    int a�o;

    std::cout << "Ingrese el dia por favor: ";
    std::cin >> dia;
    std::cout << "Ingrese el mes por favor: ";
    std::cin >> mes;
    std::cout << "Ingrese el a�o por favor: ";
    std::cin >> a�o;
    
    Fecha cumple(dia, mes, a�o);
    cumple.mostrar_fecha();

    return 0;
}
