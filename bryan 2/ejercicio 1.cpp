#include <iostream>
using namespace std;
int main(){
    int numero{0};
    cout<<"numero:";
    cin>>numero;
    int m=numero+1;
  if(numero%2!=1){
    while (3<m)
    {
        m-=2;
        if (m%3!=0)
        {
          if(m%5!=0){
            if(m%7!=0){
               cout<<m<<endl;
            }
          }
        }

    }
  }
  else{
    while (3<numero)
    {
        numero-=2;
        if (numero%3!=0)
        {
          if(numero%5!=0){
            if(numero%7!=0){
               cout<<numero<<endl;
            }
          }
        }
    }
    
  }
    cout<<7<<endl;
    cout<<5<<endl;
    cout<<3<<endl;
    cout<<2<<endl;
}