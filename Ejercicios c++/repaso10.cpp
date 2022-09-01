/*Leer dos números y luego una opción (puede ser “ + ”: suma, “ – “: resta, “ * ”:
multiplicación o “ / “: división), según la opción elegida realizar el cálculo.*/

#include <iostream>
using namespace std;

void leerNumero( double &numero){
    cout << "Ingrese un numero";
    cin >> numero;
}

double efectuarCalculo(double numero1, double numero2, char operador){
    double resultado;

    switch(operador){
        case '+' : {
            resultado = numero1 + numero2;
            break;
        }
        case '-': {
            resultado = numero1 - numero2;
            break;
        }
        case '*':{
            resultado = numero1 * numero2;
            break;
        }
        case '/':{
            resultado = numero1 / numero2;
            break;
        }
    }

    return resultado;
}

int main(){
    double numero1, numero2, resultado;
    char operador;

    cout << "Ingrese un operador( +, -, * o / ): ";
    cin >> operador;

    cout << "Ingrese valores para la cuenta: valor1 " << operador << " valor2" << endl;

    cout << "valor1. ";
    leerNumero(numero1);

    cout << "valor2. ";
    leerNumero(numero2);

    resultado = efectuarCalculo(numero1, numero2, operador);

    cout << numero1 << operador << numero2 << " =  " << resultado;

    return 0;
}