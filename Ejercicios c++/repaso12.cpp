/*Pasar un período expresado en segundos a un período expresado en días, horas,
minutos y segundos */


#include <iostream>


int main(){

    int segundos = 172815;
    int dias,horas,minutos,segundosRestantes;

    dias = segundos / 86400;  // dias guarda la division entera entre segundos y 86400
    segundosRestantes = segundos % 86400;  // guardan los segundos que no llgan a formar un dia

    horas =  segundosRestantes / 3600; 
    segundosRestantes = segundosRestantes % 3600; //ahora guarda los segundos que no forman una hora

    minutos = segundosRestantes / 60;
    segundosRestantes = segundosRestantes % 60;

    std::cout << dias << " dias " << horas << " horas " << minutos << " minutos "
              <<  segundosRestantes << " segundos";
    return 0;
}