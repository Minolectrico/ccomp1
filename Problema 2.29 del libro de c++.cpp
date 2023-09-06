#include <iostream>
using namespace std;
int main() {
 int c0=0;
  cout<<"La medida es: ";
  cin>>c0;
  int c1=1;
  cout<<"La medida es: ";
  cin>>c1;
  int c2=2;
  cout<<"La medida es: ";
  cin>>c2;
  int c3=3;
  cout<<"La medida es: ";
  cin>>c3;
  int c4=4;
  cout<<"La medida es: ";
  cin>>c4;
  cout << "\nLongitud          Area                Volumen \ndel cubo (cm)     del cubo (cm^2)     del cubo (cm^3)\n";
  cout << "\n" << c0 << "                 " << (6*c0*c0) << "                   " << (c0*c0*c0) 
            << "\n" << c1 << "                 " << (6*c1*c1) << "                   " << (c1*c1*c1) 
            << "\n" << c2 << "                 " << (6*c2*c2) << "                  " << (c2*c2*c2) 
            << "\n" << c3 << "                 " << (6*c3*c3) << "                  " << (c3*c3*c3) 
            << "\n" << c4 << "                 " << (6*c4*c4) << "                  " << (c4*c4*c4) ;
}
