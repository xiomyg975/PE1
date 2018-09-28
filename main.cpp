#include <iostream>

using namespace std;
//MULTIPLOS DE 3 Y 5
int main()
{
    int a=1000,contador=0;
    cout << "Ingrese un número" << endl;
    for(int i =0 ;i<a ; i++){
        if ((i%3==0)||(i%5==0)){
            contador= contador +i;
        }
    }
    cout << "La suma de los multiplos de 5 y 3 de 1000 es: " << contador << endl ;
    return 0;
}
