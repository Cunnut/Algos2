/*
 * tablero.h
 *
 *  Created on: 3 sep. 2022
 *      Author: agustin
 */

#ifndef TABLERO_H_
#define TABLERO_H_

#include "Celula.h"

const int CANTIDAD_FILAS = 20;
const int CANTIDAD_COLUMNAS = 80;

enum EstadoDeTablero {SinCambios, ConCambios};

typedef struct{
	Celula tablero[CANTIDAD_FILAS][CANTIDAD_COLUMNAS];
	int cantidadVivasTotales;
	EstadoDeTablero estado;
}Tablero;

//POST: inicia el tablero con todas las celulas muertas y con el campo cantidadVivasTotales en 0
void iniciarTablero(Tablero &tabla);

//PRE   0 <= posicionFila <= CANTIDAD_FILAS y 0 <= posicionColumna <= CANTIDAD_COLUMNAS
//POST: cambia el estado de la celula a viva en la posicion (posicionFila - 1, posicionColumna - 1)
void revivirEnPosicion(Tablero &tabla,const int posicionFila,const int posicionColumna);

//PRE   0 <= FILA <= CANTIDAD_FILAS y 0 <= columna <= CANTIDAD_COLUMNAS
//POST: cambia el estado de la celula a Muerta en la posicion (posicionFila - 1, posicionColumna - 1)
void matarEnPosicion(Tablero &tabla,const int posicionFila,const int posicionColumna);


//POST: imprime el tablero
void mostrarTablero(Tablero tabla);


//POST: copia cada dato en las posiciones de tablero en las mismas posiciones de copiaTablero
void copiarTablero(  Celula tablero[CANTIDAD_FILAS][CANTIDAD_COLUMNAS], Celula copiaTablero[CANTIDAD_FILAS][CANTIDAD_COLUMNAS]);

#endif /* TABLERO_H_ */
