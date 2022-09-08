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

//POST: inicia el tablero con todas las celulas muertas
void iniciarTablero(Tablero &tabla);

//POST: cambia el estado de la celula a viva en la posicion (posicionFila, posicionColumna)
void revivirEnPosicion(Tablero &tabla,const int posicionFila,const int posicionColumna);

void matarEnPosicion(Tablero &tabla,const int posicionFila,const int posicionColumna);


//POST: imprime el tablero
void mostrarTablero(Tablero tabla);







#endif /* TABLERO_H_ */
