#include<iostream>>
class punto
{
private:
    int x,y;
public:
   void setx(int x_){
    x=x_;
   }
   void sety(int y_){
    y=y_;
   }
   void print(){
    std::cout<<"("<<x<<","<<y<<")"<<std::endl;
   }
};
