#include "JuegoDeLaVida.h"
//#include "Tablero.h"
#include <iostream>

int main(){

	JuegoDeLaVida juego;

	std::cout << "--------------JUEGO DE LA VIDA--------------" << std::endl << std::endl;

	cargarTunosLimites(juego);

	iniciarJuego(juego);

	desplegarMenu(juego);

	if(juego.cantidadLimiteDeTurnos == juego.cantidadTurnos){
		std::cout << std::endl	<< "-----------FIN DEL JUEGO DE LA VIDA-------------" << std::endl;
	}
}
