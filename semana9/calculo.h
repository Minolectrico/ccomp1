#ifndef __CALCULO_H__
#define __CALCULO_H__
#include<iostream>
class Punto{
    private:
        int x,y;
    public:
        Punto(int x=0 , int y=0){
            this->x=x;
            this->y=y;
        }
        ~Punto(){
            std::cout <<"punto : incocado al constructor"<<std::endl;
        }
        void setx(int x){
            this->x=x;
        }
        void setY(int y){
            this->y=y;
        }
        int getX()const{
            return x;
        }
        int getY()const{
            return y;
        }
};
#endif