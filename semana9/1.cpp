#include<iostream>
#include"modulo.h"
using namespace std;
int main(){
    Punto x1(0,0);
    Punto x2(4,3);
    geometricvector vec(x1,x2);

    cout<< vec.modulo()<<endl;
}