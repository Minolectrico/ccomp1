#include <iostream>
using namespace std;
int main() 
{
  int edad;
  int frm_mhr1;
  int frm_mhr2;
  int frm_mhr3;
  int frm_mhr4;
  cout << "Ingrese su edad por favor: ";
  cin >> edad;
  cout << "Fórmula de Tanaka 2001: "<<endl;
  frm_mhr1 = 220 - edad;
  cout << "La frecuencia cardiaca del usuario es de: " << frm_mhr1 << endl;
  cout << "Fórmula opcional:"<<endl;
  frm_mhr2 = 208 - (0.7*edad);
  cout << "La frecuencia cardiaca del usuario es de: " << frm_mhr2 <<endl;
  cout << "Formula de Gellish 2007:"<<endl;
  frm_mhr3 = 207 -(0.7*edad);
  cout << "La frecuencia cardiaca del usuario es de: " << frm_mhr3 <<endl;
  cout << "Formula de Nes et 2012:"<<endl;
  frm_mhr3 = 211 -(0.64*edad);
  cout << "La frecuencia cardiaca del usuario es de: " << frm_mhr3 << endl;

  cout << "\nEdad           Frecuencia Cardiaca Mínima         Frecuencia Cardiaca Máxima\n20             100 - 170                          200\n30             95 - 162                           190\n35             93 - 157                           185\n40             90 - 153                           180\n45             88 - 149                           175\n50             85 - 145                           170\n55             83 - 140                           165\n60             80 - 136                           160\n65             78 - 132                           155\n70             75 - 128                           150\n";
  
  cout << "\nEsta tabla nos ayudará a saber la relación entre la\nmínima y máxima frecuencia cardiaca de una persona.";
}
