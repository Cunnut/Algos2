/* Dada una serie de números reales, determinar el valor máximo, el mínimo y las
posiciones en que estos se encontraban en la serie. El programa deberá ir
preguntando si hay más números para ingresar.*/

#include <iostream>

const int cardinalSerie = 100;

void cargarSerie( int vector[], int &tope){
    
    char c;
    int i = 0;

    std::cout << "Desea cargar un numero en la serie(s-n): ";
    std::cin >> c;

    while( c == 's'){
        std::cout << "Ingrese un numero: ";
        std::cin >> vector[i];
        i++;

        std::cout << "Desea cargar un numero en la serie(s-n): ";
        std::cin >> c;
    }

    tope = i;
}

void  mostrarSerie(int vector[],int  tope){
    std::cout << "Mostrando serie ingresada" << std::endl;
    for(int i = 0; i < tope; i++){
        std::cout << vector[i] << " ";
    }
}

void buscarMaximos(int serie[], int ml){
    int maxNum = serie[0]; //supongo que el maximo esta en la primer posicion
    int cantidadApariciones = 1;

    for(int i = 1; i < ml; i++){
        if( serie[i] > maxNum){
            maxNum = serie[i];
            cantidadApariciones = 1; 
        }
        else{
            if(serie[i] == maxNum){
                cantidadApariciones++;
            }
        }
    }

    std::cout << "El maximo de la serie es: " << maxNum << " y esta en las posiciones: ";
    int i = 0;
    while(i < ml ){
        if(serie[i] == maxNum){
            std::cout << i << " ";
        }
        i++;
    }
    std::cout << std::endl;

}

void buscarMinimos(int serie[], int ml){
    int minNum = serie[0]; //supongo que el minimo esta en la primer posicion
    int cantidadApariciones = 1;

    for(int i = 1; i < ml; i++){
        if( serie[i] < minNum){
            minNum = serie[i];
            cantidadApariciones = 1; 
        }
        else{
            if(serie[i] == minNum){
                cantidadApariciones++;
            }
        }
    }

    int i = 0;

    std::cout << "El minimo de la serie es: " << minNum << " y esta en las posiciones: ";
    while(i < ml ){
        if(serie[i] == minNum){
            std::cout << i << " ";
        }
        i++;
    }
    std::cout << std::endl;

}


int main(){

    int ml, serie[cardinalSerie];

    cargarSerie(serie, ml);

    mostrarSerie(serie, ml);

    buscarMaximos(serie, ml);

    buscarMinimos(serie, ml);

}