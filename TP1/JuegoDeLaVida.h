/*
 * JuegoDeLaVida.h
 *
 *  Created on: 6 sep. 2022
 *      Author: agustin
 */

#ifndef JUEGODELAVIDA_H_
#define JUEGODELAVIDA_H_

#include "Tablero.h"

typedef struct{
	Tablero tabla;
	int cantidadLimiteDeTurnos;
	int cantidadTurnos;
	int cantidadTurnosSinCambio;
	int nacimientosPorTurno;
	int muertesPorTurno;
	int totalNacimientos;
	int totalMuertes;
}JuegoDeLaVida;

static const int CANTIDAD_INGRESOS = 1600;
static const int CANTIDAD_VECINAS = 8;

//POST: pide al usuario que ingrese la cantidad maxima de turnos.
void cargarTunosLimites(JuegoDeLaVida &juego);


//PRE   0 <= FILA <= CANTIDAD_FILAS y 0 <= columna <= CANTIDAD_COLUMNAS
//POST: determina los puntos extremos de un rectangulo formado por las vecinas de una celula en (fila ,columna)
void determinarTopes(const int fila,const int  columna, int &topeIzquierdo, int &topeDerecho,int  &topeSuperior,int &topeInferior);


//PRE   0 <= FILA <= CANTIDAD_FILAS y 0 <= columna <= CANTIDAD_COLUMNAS
//POST: devuelve la cantidad de celulas vecinas vivas que tiene una celula
int contarVecinasVivas(const Celula matrizCelulas[CANTIDAD_FILAS][CANTIDAD_COLUMNAS], const int fila, const int columna);


//POST: cambiarElestado de las celulas. (Ver manual de programador)
void cambiarEstadosCelulas(JuegoDeLaVida &juego);


//POST: muestra datos sobre el tablero y las celulas(ver manual del programador)
void mostrarDatos( const JuegoDeLaVida &juego);


//POST: ejecuta un turno (Ver manual de usuario y programador)
void ejecutarTurno(JuegoDeLaVida &juego);


//POST: Muestra opciones y ejecuta la opcion ingresada
void  desplegarMenu(JuegoDeLaVida &juego);


//POST: solicita al usuario posiciones del tablero, cambia el estado de las celulas en ellas y devuelve la cantidad de celulas vivas cargadas
int cargarCelulasVivas(JuegoDeLaVida &juego);


//POST: prepara el tablero y los valores iniciales
void iniciarJuego(JuegoDeLaVida &juego);







#endif /* JUEGODELAVIDA_H_ */
