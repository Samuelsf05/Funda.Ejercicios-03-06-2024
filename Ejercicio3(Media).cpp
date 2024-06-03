#include <iostream>

using namespace std;

int suma(int entero1, int entero2){
int resultado=0;
resultado = (entero1 + entero2);
return resultado;
}

int resta(int entero1, int entero2){
int resultado=0;
resultado = (entero1 - entero2);
return resultado;
}

int multiplicacion(int entero1, int entero2){
    int resultado=0;
    resultado = (entero1 * entero2);
return resultado;
}

float division(int entero1, int entero2){
    float resultado=0;
    resultado = float(entero1) / float(entero2);
return resultado;
}

double CalcuMedia(double num1, double num2){
    double media;
    media = (num1 + num2)/2;
return media;
}


int main(){
    int n1=0, n2=0, respuesta=0, respuestaRes=0, respuestaMulti=0;
    float respuestaDivi=0;
    double resultadoMed=0;
    n1=8;
    n2=6;

    respuesta = suma(n1, n2);
    respuestaRes = resta(n1, n2);
    respuestaMulti = multiplicacion(n1, n2);
    respuestaDivi = division(n1, n2);
    resultadoMed = CalcuMedia(n1, n2);

    cout << "El valor de la suma de dos numeros es: "<<respuesta<<". \n";
    cout << "El valor de la resta de dos numeros es: "<<respuestaRes<< ". \n";
    cout << "El valor de la multiplicacion de dos numeros es: "<<respuestaMulti<<". \n";
    cout << "El valor de la division de dos numeros es: "<<respuestaDivi<<". \n";
    cout << "El valor de la media de dos numeros es: "<<resultadoMed;

    return 0;
}