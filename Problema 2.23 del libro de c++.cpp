#include <iostream>
using namespace std;
int main() {
  int numero1=0;
  int numero2=0;
  int numero3=0;
  int numero4=0;
  int numero5=0;
  cout<<"El numero1 es: " ;
  cin>>numero1;
  cout<<"El numero2 es: " ;
  cin>>numero2;
  cout<<"El numero3 es: " ;
  cin>>numero3;
  cout<<"El numero4 es: " ;
  cin>>numero4;
  cout<<"El numero5 es: " ;
  cin>>numero5;
  if((numero1>numero2)&&(numero1>numero3)&&(numero1>numero4)&&(numero1>numero5)){
    cout<<"el maryor es: "<<numero1<<endl;
  }
  if((numero2>numero1)&&(numero2>numero3)&&(numero2>numero4)&&(numero2>numero5)){
    cout<<"el maryor es: "<<numero2<<endl;
  }
  if((numero3>numero1)&&(numero3>numero2)&&(numero3>numero4)&&(numero3>numero5)){
    cout<<"el maryor es: "<<numero3<<endl;
  }
  if((numero4>numero1)&&(numero4>numero3)&&(numero4>numero2)&&(numero4>numero5)){
    cout<<"el maryor es: "<<numero4<<endl;
  }
  if((numero5>numero1)&&(numero5>numero3)&&(numero5>numero4)&&(numero5>numero2)){
    cout<<"el maryor es: "<<numero5<<endl;
  }
  if((numero1<numero2)&&(numero1<numero3)&&(numero1<numero4)&&(numero1<numero5)){
    cout<<"el menor es: "<<numero1<<endl;
  }
  if((numero2<numero1)&&(numero2<numero3)&&(numero2<numero4)&&(numero2<numero5)){
    cout<<"el menor es: "<<numero2<<endl;
  }
  if((numero3<numero1)&&(numero3<numero2)&&(numero3<numero4)&&(numero3<numero5)){
    cout<<"el menor es: "<<numero3<<endl;
  }
  if((numero4<numero1)&&(numero4<numero3)&&(numero4<numero2)&&(numero4<numero5)){
    cout<<"el menor es: "<<numero4<<endl;
  }
  if((numero5<numero1)&&(numero5<numero3)&&(numero5<numero4)&&(numero5<numero2)){
    cout<<"el menor es: "<<numero5<<endl;
  }
}
