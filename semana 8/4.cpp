#include<iostream>
#include"punto.h"
using namespace std;
int main(){
    punto p;
    p.setx(10);
    p.sety(20);
    punto *ptr=&p;
    ptr->setx(4);
    ptr->sety(3);
    ptr->print(); // las flechas esta para usar con punteros y para entrar a los metodos de una clase
    
}
