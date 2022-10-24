/*
 * main.cpp
 *
 *  Created on: 11 oct. 2022
 *      Author: agustin
 */




#include <iostream>
#include "Complejo.h"
using namespace std;

int main(){
Complejo c1(0.1, 1.1);
Complejo c2(0.3, 2.1);
Complejo c3 = c2.sumar(c2);
cout << "Primer complejo " << c1.getParteReal() << " 	" << c1.getParteImaginaria() <<  " 		" <<c1.modulo() << endl;
cout << "Segundo complejo " << c2.getParteReal() << " 	" << c2.getParteImaginaria() <<  " 		" <<c2.modulo() << endl;
cout << "Tercer complejo " << c3.getParteReal() << " 	" << c3.getParteImaginaria() <<  "		" <<c3.modulo() << endl;
}
