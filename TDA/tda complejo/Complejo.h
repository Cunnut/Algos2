/*
 * complejo.h
 *
 *  Created on: 8 oct. 2022
 *      Author: agustin
 */

#ifndef COMPLEJO_H_
#define COMPLEJO_H_

class Complejo{
private:
	double parteReal;
	double parteImaginaria;

public:
	//constructor sin parametros
	//pre: -
	//post: Crea un Complejo conpartes real e imaginaria iguales a cero
	Complejo();

	//constructor con parametros
	//pre: parteReal y parteImaginaria son numeros reales
	//post: crea un complejo con parte Real -parteReal- y  parte imaginaria -parteImaginaria-
	Complejo(const double &parteReal,const double &parteImaginaria);

	double getParteReal();
	double getParteImaginaria();

	void setParteReal(const double &unReal);
	void setParteImaginaria(const double &unReal);


	//descripcion: al complejo actual le suma el complejo pasado por argumento y devuelve el resultado
	//pre: unComplejo es un complejo valido
	//post: devuelve un complejo cuya parte real es la suma de las partes reales del complejo actual y el pasado por parametro. idem para la parte imaginaria
	Complejo sumar(const Complejo &unComplejo);

	//descripcion: al complejo actual le resta el complejo pasado por argumento y devuelve el resultado
	//pre: unComplejo es un complejo valido
	//post: devuelve un complejo cuya parte real es la resta de las partes reales del complejo actual y el pasado por parametro. idem para la parte imaginaria
	Complejo restar(const Complejo &unComplejo);

	//pre: -
	//post: devuel el modulo del Complejo
	double modulo();
};

#endif /* COMPLEJO_H_ */
