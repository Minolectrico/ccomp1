#include <iostream>
using  namespace std;
int main()
{
    int a;
    int b;
    int c;
    int producto;

    for (a=1; a <= 500; a++)
    {
        for (b = 1; b <= 500; b++)
        {
            c = 1000 - b - a;
            if (a*a + b*b - c*c == 0 && a < b )
            {
                producto = a * b * c;
                cout << "El producto de a*b*c es: "<< producto << endl;
                cout << "Los numeros son: " << a << ", " << b << ", " << c;
            }
        }
    }
    return 0;
}
