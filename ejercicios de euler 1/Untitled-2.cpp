#include<iostream>
using namespace std;
int main(){
    int numero;
    numero=10;
    int total{0};
    
    while (0<numero)
    {
        numero-=1;
        if ((numero%3==0)||(numero%5==0))
        {
            total=total+numero;
        }
        
    }
    cout<<total<<endl;
    
}