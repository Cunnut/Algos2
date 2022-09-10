/*
 * JuegoDeLaVida.cpp
 *
 *  Created on: 6 sep. 2022
 *      Author: agustin
 */

#include "JuegoDeLaVida.h"
#include <iostream>
using namespace std;

void cargarTunosLimites(JuegoDeLaVida &juego){
	cout << "Ingrese la cantidad de turnos limites:  ";
	cin >> juego.cantidadLimiteDeTurnos;
}

void determinarTopes(const int fila,const int  columna, int &topeIzquierdo, int &topeDerecho,int  &topeSuperior,int &topeInferior){

	switch (fila){
		case 0:{
			topeSuperior = fila;
			topeInferior = fila + 1;
			break;
		}
		case CANTIDAD_FILAS - 1:{
			topeSuperior = fila - 1;
			topeInferior = fila;
			break;
		}
		default : {
			topeSuperior = fila -1;
			topeInferior = fila + 1;
		}
	}

	switch (columna){
		case 0:{
			topeIzquierdo = columna;
			topeDerecho = columna + 1;
			break;
		}
		case CANTIDAD_COLUMNAS - 1:{
			topeIzquierdo = columna -1;
			topeDerecho = columna;
			break;
		}
		default : {
			topeIzquierdo = columna -1;
			topeDerecho = columna + 1;
		}
	}
}


int contarVecinasVivas(const Celula matrizCelulas[CANTIDAD_FILAS][CANTIDAD_COLUMNAS], const int fila, const int columna){

	int cantidadVecinasVivas = 0;
	int topeIzquierdo, topeDerecho, topeSuperior,topeInferior;

	determinarTopes(fila, columna, topeIzquierdo, topeDerecho, topeSuperior,topeInferior);


	for(int i = topeSuperior; i <= topeInferior; i++){
		for(int j = topeIzquierdo; j <= topeDerecho; j++ ){
			if(!(i == fila && j == columna)){
				if(matrizCelulas[i][j].estado == Viva){
					cantidadVecinasVivas++;
				}
			}
		}
	}
	return cantidadVecinasVivas;
}

void cambiarEstadosCelulas(JuegoDeLaVida &juego){
	juego.tabla.estado = SinCambios;

	JuegoDeLaVida copiaJuego;
	copiarTablero( juego.tabla.tablero, copiaJuego.tabla.tablero);
	int cantidadVecinasVivas;

	for(int i = 0; i < CANTIDAD_FILAS; i++){
		for(int j = 0; j < CANTIDAD_COLUMNAS; j++){

			cantidadVecinasVivas = contarVecinasVivas(copiaJuego.tabla.tablero, i, j);

			if( copiaJuego.tabla.tablero[i][j].estado ==  Muerta && cantidadVecinasVivas == 3){
					revivirEnPosicion(juego.tabla, i+1, j+1);
					juego.tabla.estado = ConCambios;
					juego.nacimientosPorTurno++;
			}
			else{
				if(copiaJuego.tabla.tablero[i][j].estado ==  Viva){
					if(cantidadVecinasVivas != 2 && cantidadVecinasVivas != 3){
						matarEnPosicion(juego.tabla, i+1, j+1);
						juego.tabla.estado = ConCambios;
						juego.muertesPorTurno++;
					}
				}
			}
		}
	}

	if( juego.tabla.estado == ConCambios){
		juego.cantidadTurnosSinCambio = 0;
	}
	else{
		juego.cantidadTurnosSinCambio++;
	}
}

void mostrarDatos( const JuegoDeLaVida &juego){
	cout << "Nacieron " << juego.nacimientosPorTurno << " celulas" << endl;
	cout << "Murieron  " << juego.muertesPorTurno << " celulas" << endl;
	cout << "Total celulas vivas: " << juego.tabla.cantidadVivasTotales << endl;

	cout << "---numero de turno: " << juego.cantidadTurnos << endl;

	cout << "Promedio de nacimientos a lo largo del juego: "
	     << juego.totalNacimientos / juego.cantidadTurnos << " nacimientos por turno" << endl;

	cout << "Promedio de muertes a lo largo del juego: "
	<< juego.totalMuertes / juego.cantidadTurnos << " muertes por turno" << endl;

	if(juego.cantidadTurnosSinCambio >= 2 ){
		cout << "El juego se congelo(no sufrio cambios en 2 turnos consecutivos)" << endl;
	}

}

void ejecutarTurno(JuegoDeLaVida &juego){
	juego.cantidadTurnos = juego.cantidadTurnos + 1;
	juego.nacimientosPorTurno = 0;
	juego.muertesPorTurno = 0;

	cambiarEstadosCelulas(juego);

	juego.tabla.cantidadVivasTotales = juego.tabla.cantidadVivasTotales + juego.nacimientosPorTurno - juego.muertesPorTurno;
	juego.totalMuertes = juego.totalMuertes + juego.muertesPorTurno;
	juego.totalNacimientos = juego.totalNacimientos + juego.nacimientosPorTurno;

	mostrarTablero(juego.tabla);
	mostrarDatos(juego);

	if(juego.cantidadTurnos < juego.cantidadLimiteDeTurnos){
		desplegarMenu(juego);
	}
}

void  desplegarMenu(JuegoDeLaVida &juego){

	int opcion;

	cout << endl << "------------Seleccione una opcion--------------" << endl;
	cout << "1) Ejecutar un turno" << endl;
	cout << "2) Reiniciar el juego" << endl;
	cout << "3) Terminar" << endl;

	cout << "Ingrese una opcion(1 - 3): ";
	cin >> opcion;

	switch (opcion ){

		case 1:{
			ejecutarTurno(juego);
			break;
		}
		case 2:{
			cout << endl << endl << "-----JUEGO  REINICIADO----" << endl;
			cargarTunosLimites(juego);
			iniciarJuego(juego);
			desplegarMenu(juego);
			break;
		}
		default : {
			cout << endl << "--------------Fin del Juego de la Vida-------------";
		}
	}
}

int cargarCelulasVivas(JuegoDeLaVida &juego){
	int posicionFila, posicionColumna;
	cout << "Las células vivas se indicarán por fila y columna, siendo (1, 1) la celda" << endl;
    cout <<  "superior izquierda y la ("<< CANTIDAD_FILAS << "," << CANTIDAD_COLUMNAS << ") la celda inferior derecha." << endl;
	cout << "Ingrese posicion de filas y columnas de la celulas vivas((0,0) para cancelar)" << endl;

	int i = 0;

	do{
		cout << "Fila: ";
		cin >> posicionFila;

		cout << "Columna: ";
		cin >> posicionColumna;

		cout << endl;

		if(posicionFila != 0 && posicionColumna != 0){
			revivirEnPosicion(juego.tabla, posicionFila, posicionColumna);
			i++;
		}
	}while(posicionFila != 0 && posicionColumna != 0 && i < CANTIDAD_INGRESOS);

	return i;
}

void iniciarJuego(JuegoDeLaVida &juego){
	juego.cantidadTurnos = 0;
	juego.cantidadTurnosSinCambio = 0;
	juego.totalMuertes = 0;
	juego.totalNacimientos = 0;

	iniciarTablero(juego.tabla);

	juego.tabla.cantidadVivasTotales = juego.tabla.cantidadVivasTotales + cargarCelulasVivas(juego);

	cout << "Mostrando estados iniciales: las celulas vivas se muestran con el caracter  \"v\" y las muertas con \".\"" << endl;
	mostrarTablero(juego.tabla);
	cout << "Cantidad de Celulas vivas: " << juego.tabla.cantidadVivasTotales << endl;
}
