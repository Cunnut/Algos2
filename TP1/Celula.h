/*
 * Celula.h
 *
 *  Created on: 3 sep. 2022
 *      Author: agustin
 */

#ifndef CELULA_H_
#define CELULA_H_

enum EstadoDeCelula {Viva, Muerta};

typedef struct {
	EstadoDeCelula estado;
}Celula;



//POST: asigna el estado de una celula a muerta
void matarCelula(Celula &celula);

//POST: asigna el estado de una celula a viva
void revivirCelula( Celula &celula);

#endif /* CELULA_H_ */
