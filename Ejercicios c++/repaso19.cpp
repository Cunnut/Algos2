/*Dada una serie de números enteros terminada en cero, imprimir los tres
mayores.*/

#include <iostream>

using namespace std;

const int LARGO_SERIE  = 10;

const int CANTIDAD_MAXIMOS = 3;

void cargarSerie( int vector[], int &tope){

    int i = 0;

    cout << "Ingrese una serie de numeros terminada en 0" << endl;

    do{
        std::cout << "v[" << i << "]";
        std::cin >> vector[i];
        i++;
    }while( i < LARGO_SERIE && vector[i-1] != 0 );
    tope = i;
}

void  mostrarSerie(int vector[],int  tope){
    cout << endl << "Mostrando serie ingresada" << endl;
    for(int i = 0; i < tope; i++){
        std::cout << vector[i] << " ";
    }
}


void buscarMaximos(int serie[], int ml){
    //ordeno por burbujo hasta dejar los maximos pedidos al final
    int i = 1;
    bool estaDesordenado = true;
    int aux;

    while( estaDesordenado && i <= CANTIDAD_MAXIMOS ){
        estaDesordenado = false;
        for(int j = 0; j < ml - i; j++){
            if( serie[j] > serie[j+1] ){
                aux = serie[j];
                serie[j] = serie[j+1];
                serie[j+1] = aux;
                estaDesordenado = true;
            }
        }
        i++;
    }

    cout << "Los " << CANTIDAD_MAXIMOS << " mas grandes: ";
    for(int i = ml - 1 ; i >= ml - CANTIDAD_MAXIMOS; i--){
        cout << serie[i] << "  ";
    };
}

int main(){
    int serie[LARGO_SERIE];
    int ml;

    cargarSerie(serie, ml);
    mostrarSerie(serie, ml);
    buscarMaximos(serie, ml);
    
}