#include <iostream>
using namespace std;
int main() {
  int primero,segundo,tercero;
  cout<<"Escoja el primer numeor ";
  cin>>primero;
  cout<<"Escoja el segundo numero: ";
  cin>>segundo;
  cout<<"Escoja el tercer numero: ";
  cin>>tercero;
  if(primero%tercero==0){
    cout<<primero<<"es factor"<<tercero<<endl;
  }
  else{
    cout<<primero<<"no es factor"<<tercero<<endl;
  }
  if(segundo%tercero==0){
    cout<<segundo<<" es factor"<<tercero<<endl;
  }
  else{
    cout<<segundo<<"no es factor"<<tercero<<endl;
  }
}
