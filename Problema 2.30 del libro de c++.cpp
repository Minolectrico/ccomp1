#include <iostream>
using namespace std;
int main() {
  cout << " Valor IMC\n Bajo peso:    Por debajo de 18.5\n Normal:       Entre 18.5 y 24.9\n Sobrepeso:    Entre 25 y 29.9\n Obesidad:     30 o superior\n\n";
  int x;
  cout<<"escoja el metodo: ";
  cin>>x;
  if(x==1){
    float libras;
    float pulgadas;
    cout<<"tu peso en libras es ";
    cin>>libras;
    cout<<"tu altura en pulgadas es: ";
    cin>>pulgadas;
    cout<<"tu valor en IMC es : "<<(libras*703)/(pulgadas*pulgadas)<<endl; 
  }
  else if(x==2){
    float kilogramos;
    float metros;
    cout<<"tu peso en kilogramos es ";
    cin>>kilogramos;
    cout<<"tu altura en metros es: ";
    cin>>metros;
     cout<<"tu valor en IMC es : "<<kilogramos/(metros*metros)<<endl;
  }
  
}
