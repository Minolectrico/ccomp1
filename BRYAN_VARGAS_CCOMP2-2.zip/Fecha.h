#include <iostream>

class Fecha
{
public: 
    Fecha(int d, int m, int a):
        mes((m >= 1 && m <= 12) ? m : 1),dia(d),a�o(a){
          
        }  
    void set_mes(int m)
    {
        m = (m == 1 && m==m) ? 1 : m;
    }
    int get_mes()
    {
        return mes;
    }

    void set_dia(int d)
    {
        dia = d;
    }
    int get_dia()
    {
        return dia;
    }

    void set_a�o(int a)
    {
        a�o = a;
    }
    int get_a�o()
    {
        return a�o;
    }

    void mostrar_fecha()
    {
        std::cout << dia << "/"<< mes << "/" << a�o ;
    }
private:
    int dia;
    int mes;
    int a�o;
};

