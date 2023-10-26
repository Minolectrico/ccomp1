#ifndef __MODULO_H__
#define __MODULO_H__
#include<iostream>
#include"calculo.h"
#include<cmath>
class geometricvector{
    private:
        Punto start;
        Punto end;
    public:
        geometricvector(Punto start,Punto end){
            this->start=start;
            this->end=end;
        }
        ~geometricvector(){
            std::cout<<"geometricvector: invocando al destructor"<<std::endl;
        }
        double modulo()const{
            return sqrt(pow((end.getX()-start.getX()),2)+pow((end.getY()-start.getY()),2));
        }
        void setStart(Punto start){
            this->start=start;
        }
        void setEnd(Punto end){
            this->end=end;
        }
        Punto getStart()const{
            return start;
        }
        Punto getEnd()const{
            return end;
        }
 };
 #endif