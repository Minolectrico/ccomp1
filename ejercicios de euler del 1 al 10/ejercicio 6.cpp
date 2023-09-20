#include <iostream>
using namespace std;
int main()
{
    long long x{0};
    long long y{0};
    long long diferencia;
    for (int i = 0; i <= 100; i++)
    {
        x += (i*i);
        y += i; 
    }
    diferencia = (y*y) - x;
    cout << "La diferencia entre la suma de cuadrados y el cuadrado de la suma es: " << diferencia;

    return 0;
}
