#include <iostream>
using namespace std;
int main() {
  int x=0;
  int y=0;
  cout<<"Escoja su numero: ";
  cin>>x;
  cout<<"Escoja su numero: ";
  cin>>y;
  int suma=x+y;
  int division=suma%2;
  if(division==0){
    cout<<"la suma es "<< suma <<" es un numero par "<<endl;
  }
  else{
    cout<<"la suma es "<<suma<<" es un numero impar "<<endl;
      }
}
