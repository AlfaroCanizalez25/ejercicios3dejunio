#include <iostream>
using namespace std;

int multiplicacion (int entero1, int entero2){
    int resultado=0;
    resultado = (entero1*entero2);
    return resultado;
}
int main (){
int n1 = 0, n2 = 0, respuesta = 0;
n1= 8;
n2= 6;
respuesta = multiplicacion (n1, n2);
cout << "El valor de la multiplicacion de los numeros es:" << respuesta << endl;
return 0;
}
