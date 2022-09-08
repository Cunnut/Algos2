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
	int cantidadTurnos;
	int cantidadTurnosSinCambio;
	int nacimientosPorTurno;
	int muertesPorTurno;
	int totalNacimientos;
	int totalMuertes;
}JuegoDeLaVida;

static const int CANTIDAD_INGRESOS = 1600;
static const int CANTIDAD_VECINAS = 8;


void ejecutarTurno(JuegoDeLaVida &juego);

//POST: Muestra opciones y ejecuta la opcion ingresada
void  desplegarMenu(JuegoDeLaVida &juego);

//POST: solicita al usuario posiciones del tablero, cambia el estado de las celulas en ellas y devuelve la cantidad de celulas vivas cargadas
int cargarCelulasVivas(JuegoDeLaVida &juego);

//POST: prepara el tablero y los valores iniciales
void iniciarJuego(JuegoDeLaVida &juego);







#endif /* JUEGODELAVIDA_H_ */
