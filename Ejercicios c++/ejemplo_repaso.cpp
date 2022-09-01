/* Declarar un tipo de dato para un array de 100 reales.
solicitar tamaño(t) y cargar t elementos en un array del tipo definido
ordenar array
Emitir array */


#include <iostream>
using namespace std;

const int n = 100;
typedef float vector[n];

void cargar( vector v, int t){
    for(int i = 0; i < t; i++){
        cout << "v[" << i << "]: "; //imprime v[i]: 
        cin >> v[i];
    }
}

void ordenar(vector v, int t){
    //Burbujeo
    int i = 1, j = 0;
    bool estaOrdenado = false;
    float aux;
    while(!estaOrdenado){
        estaOrdenado = true;
        for( j = 0; j < t - i; j++){
            if( v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
                estaOrdenado = false;
            }
        }
        i++;
    }
}

void emitir(vector v, int t){
    for( int i = 0; i < t; i++){
        cout << v[i] <<"|" ;
    }
}



int main(){
    int t; //tamaño
    vector v;

    cout << "Ingrese el tamaño del vector: ";
    cin >> t;

    cargar(v, t);
    ordenar(v, t);
    emitir(v, t);
} 
