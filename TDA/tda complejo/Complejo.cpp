/*
 * Complejo.cpp
 *
 *  Created on: 10 oct. 2022
 *      Author: agustin
 */

#include "Complejo.h"

#include <cmath>

Complejo::Complejo(){
	parteReal = 0.0;
	parteImaginaria = 0.0;
}

Complejo::Complejo(const double &parteReal,const double &parteImaginaria){
	this->parteReal = parteReal;
	this->parteImaginaria = parteImaginaria;
}

double Complejo::getParteReal(){
	return parteReal;
}
double Complejo::getParteImaginaria(){
	return parteImaginaria;
}

void Complejo::setParteReal(const double &unReal){
	parteReal = unReal;
}

void Complejo::setParteImaginaria(const double &unReal){
	parteImaginaria = unReal;
}

Complejo Complejo::sumar(const Complejo &unComplejo){
	Complejo aux;
	aux.parteReal = parteReal + unComplejo.parteReal;
	aux.parteImaginaria = parteImaginaria  + unComplejo.parteImaginaria;

	return aux;
}


Complejo Complejo::restar(const Complejo &unComplejo){
	Complejo aux;
	aux.parteReal = (this->parteReal) - unComplejo.parteReal;
	aux.parteImaginaria = (this->parteImaginaria ) - unComplejo.parteImaginaria;
	return aux;
}

double Complejo::modulo(){
	double aux = parteReal*parteReal + parteImaginaria*parteImaginaria;
	return sqrt(aux);
}


