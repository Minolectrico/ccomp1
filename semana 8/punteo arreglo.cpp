#include<iostream>
using namespace std;
int main(){
    int arr[]={5,31,24,5,6};
    int tam=sizeof(arr)/sizeof(arr[0]);
    cout<<tam<<endl;
    int *ptr=arr;
    for (int i = 0; i < tam; i++){
        cout<<*(ptr+i)<<endl;   
    }
}