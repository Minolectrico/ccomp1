#include<iostream>
using namespace std;
int main(){
    int numero;
    int v;
    int pr=0;
    int ps=1;
    int total{0};
    cout<<"ingrese numero";
    cin>>numero;
    for(int x=3;x<=numero;x++){
        v=pr+ps;
        pr=ps;
        ps=v;
        cout<<v<<endl;
        if (v%2==0)
        {
            total=total+v;
        }
    }
    cout<<"la suma de los pares es"<<total;
}