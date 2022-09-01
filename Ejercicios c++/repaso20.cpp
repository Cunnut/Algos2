/*Dada una lista de nombres y de salarios respectivos, determinar el salario
máximo, el mínimo y la persona que percibe cada uno. */

#include <iostream>
#include <string>

typedef struct{
    std::string nombre;
    float salario;
}Empleado;

void cargarSerie(Empleado lista[], int &tope){
    int i = 0;
    char c;

    std::cout <<"Agregar dato? (s/n): ";
    std::cin >> c;

    while(c == 's'){
        std::cout << "Ingrese Nombre del empleado: ";
        std::cin >> lista[i].nombre;

        std::cout << "Ingrese salario del empleado: ";
        std::cin >> lista[i].salario;

        i++;

        std::cout <<"Agregar dato? (s/n): ";
        std::cin >> c;

    }
    tope = i;
}

void  mostrarSerie(Empleado vector[],int  tope){
    std::cout << std::endl <<"Mostrando lista ingresada" << std::endl;
    std::cout <<"Nombre     Sueldo" << std::endl;

    for(int i = 0; i < tope; i++){
        std::cout << vector[i].nombre << "      " << vector[i].salario << std::endl;
    }
}

void buscarMaximo(Empleado serie[], int ml){
    int maxNum = serie[0].salario; //supongo que el maximo esta en la primer posicion
    int posicionMaximo = 0;

    for(int i = 1; i < ml; i++){
        if( serie[i].salario > maxNum){
            maxNum = serie[i].salario;
            posicionMaximo = i; 
        }
    }

    std::cout << "Salario maximo : " << serie[posicionMaximo].salario 
            << " Corresponde a: " << serie[posicionMaximo].nombre << std::endl; 

}


void buscarMinimo(Empleado serie[], int ml){
    int minNum = serie[0].salario; //supongo que el minimo esta en la primer posicion
    int posicionMin = 0;

    for(int i = 1; i < ml; i++){
        if( serie[i].salario < minNum){
            minNum = serie[i].salario;
            posicionMin = i; 
        }
    }

    std::cout << "Salario minimo : " << serie[posicionMin].salario 
    << " Corresponde a: " << serie[posicionMin].nombre << std::endl; 

}


int main(){
    Empleado listaEmpleados[10];
    int ml;

    cargarSerie(listaEmpleados, ml);
    mostrarSerie(listaEmpleados, ml);
    buscarMaximo(listaEmpleados, ml);
    buscarMinimo(listaEmpleados, ml);
}