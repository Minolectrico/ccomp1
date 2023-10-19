#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *ptr=&x;
    cout<<&x<<endl;
    cout<<ptr<<endl;

    // operador de indireccion *
    cout<<*ptr<<endl;
    *ptr=1000;
    cout<<*ptr<<endl;
    cout<<x<<endl;

}