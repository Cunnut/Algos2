/*
 * Celula.cpp
 *
 *  Created on: 3 sep. 2022
 *      Author: agustin
 */
#include "Celula.h"


void matarCelula(Celula &celula){
	celula.estado = Muerta;
}

void revivirCelula( Celula &celula){
	celula.estado = Viva;
}





