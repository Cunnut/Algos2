/*Escribir un algoritmo que lea una serie de números reales y verifique si están
ordenados en forma ascendente, descendente o si no están ordenados,
informando por pantalla.*/

#include <iostream>

using namespace std;
const int largoSerie = 100;

void cargarSerie(float vector[], int &tope){
    int i = 0;
    char c;

    cout << "Desea ingresar un numero(s/n): ";
    cin >> c;

    while( i < largoSerie && c == 's'){
        cout << "serie[" << i << "]: ";
        cin >> vector[i];
        i++;
        cout << "Desea ingresar un numero(s/n): ";
        cin >> c;
    }

    tope = i;
}

void mostrarSerie(float vector[], int tope){
    cout << endl << "Mostrando serie: ";
    for(int i = 0; i < tope; i++){
        cout << vector[i] << "  ";
    }
}

bool ordenadoAscendente(float serie[], int ml){
    bool estaOrdenada = true;
    int i = 0;
    //la supongo ordenada, si un elemento en la posicion i+1 es menor que su predecesor entonces no esta ordenada ascendentemente
    while( i < ml - 1 && estaOrdenada){
        if(serie[i] > serie[i+1] ){
            estaOrdenada = false;
        }
        i++;
    }
    return estaOrdenada;
}

bool ordenadoDescendente(float serie[], int ml){
    bool estaOrdenada = true;
    int i = 0;

    while( i < ml - 1 && estaOrdenada){
        if(serie[i] < serie[i+1] ){
            estaOrdenada = false;
        }
        i++;
    }
    return estaOrdenada;
}




void informarOrdenamiento(float serie[], int ml){
    if(ordenadoAscendente(serie, ml)){
        cout << endl << "Serie ordenada ascendentemente";
    }
    else{
        if(ordenadoDescendente(serie, ml)){   
            cout << endl << "Serie ordenada descendentemente";
        }
        else{
            cout << endl << "Serie NO ordenada";
        }
    }
}

int main(){
    float serie[largoSerie];
    int ml;

    cargarSerie(serie, ml);
    mostrarSerie(serie, ml);
    informarOrdenamiento(serie, ml);
}