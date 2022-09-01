/*Formar un menú de 4 opciones y, al elegir una de ellas, saldrá un cartel
diciendo qué opción se eligió o si fue una opción incorrecta */

#include <iostream>


int main(){

    int opcion;

    std::cout << "Menu" << std::endl << "1 - opcion1" << std::endl
            << "2 - opcion2" << std::endl
            << "3 - opcion3" << std::endl
            << "4 - opcion4" << std::endl;
    
    std::cout << "Ingrese una opcion(1 - 4): ";
    std::cin >> opcion;

    switch(opcion){
        case 1: case 2: case 3: case 4:{
            std::cout << std::endl << "Usted ingreso la opcion " << opcion << std::endl;
            break;
        }
        default:{
            std::cout << std::endl << "Usted ingreso una opcion incorrecta" << std::endl;
        }
    }
}