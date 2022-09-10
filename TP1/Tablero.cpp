/*
 * Tablero.cpp
 *
 *  Created on: 3 sep. 2022
 *      Author: agustin
 */

#include "Tablero.h"
#include <iostream>
using namespace std;

void iniciarTablero(Tablero &tabla){
	tabla.cantidadVivasTotales = 0;
	for(int i = 0; i < CANTIDAD_FILAS; i++){
		for(int j = 0; j < CANTIDAD_COLUMNAS; j++){
			matarCelula(tabla.tablero[i][j]);
		}
	}
}

void revivirEnPosicion(Tablero &tabla, const int posicionFila,const int posicionColumna){
	revivirCelula(tabla.tablero[posicionFila - 1][posicionColumna - 1]);
}

void matarEnPosicion(Tablero &tabla,const int posicionFila,const int posicionColumna){
	matarCelula(tabla.tablero[posicionFila - 1][posicionColumna - 1]);
}



void mostrarTablero(Tablero tabla){

	for(int i = 0; i < CANTIDAD_FILAS; i++){
		cout << "| ";
		for(int j = 0; j < CANTIDAD_COLUMNAS; j++){
			//cout << "Probando ";
			if(tabla.tablero[i][j].estado == Viva){
				cout << "v ";
			}
			else{
				cout << ". ";
			}
		}
		cout << "|" <<endl;
	}

	cout << endl << endl;
}

void copiarTablero(  Celula tablero[CANTIDAD_FILAS][CANTIDAD_COLUMNAS], Celula copiaTablero[CANTIDAD_FILAS][CANTIDAD_COLUMNAS]){
	for(int i = 0; i < CANTIDAD_FILAS; i++){
		for(int j = 0; j < CANTIDAD_COLUMNAS; j++){
			copiaTablero[i][j].estado = tablero[i][j].estado;
		}
	}
}



