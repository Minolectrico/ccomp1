#include <iostream>
using namespace std;
int main() {
 int cifras;
  cout<<"su numero de 4 cifras: ";
  cin>>cifras;
  cout << cifras%10 << "  " << (cifras/10)%10 << "  " << (cifras/100)%10 << "  " << (cifras/1000)%10 << std::endl;
}
