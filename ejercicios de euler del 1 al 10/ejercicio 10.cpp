#include<iostream>
using namespace std;
int main(){
  long long suma{0};
  for(int i=3;i<2000000;i+=2){
    if(i%3!=0){
      if(i%5!=0){
        if(i%7!=0){
          suma=suma+i;
        }
      }
    }
  }
  int respuesta=suma+17;
  cout<<respuesta;
}
