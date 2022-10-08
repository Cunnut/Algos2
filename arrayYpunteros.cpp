#include<iostream>
using namespace std;

int main()
{
 const int tam=5;
 typedef int vector [tam];
 vector v;
 int *p;

 //primero vamos a cargar el vector
 //por motivos didacticos, iremos declarando y definiendo las variables
 //a medida que las necesitemos en el programa
 //Recordar qu , por normas de buena programacion, lo mas correcto es definir y declarar
 //las variables al comienzo del programa

 int i;
 cout<<" Carga del vector\n"<<endl;
 for(i=0;i<tam;i++)
 {
    cout<<endl<<"Ingrese v["<< i<< "]" ;
    cin>>v[i];
     }

//mostramosel contenido del vector

cout<< " Emision del vector "<<endl ;
for(i=0;i<tam;i++)
    {cout<< "v[" <<i<<"] =" <<  v[i]<<endl ;}

//Ahora vamos a mostrar las direcciones  correspondientes a los elementos del vector
//recordar que los valores que se van a emitir   varian de una computadora a otra

for(i=0;i<tam;i++)
    {cout<< " El elemento v[ " << i << "]  tiene direccion "<<  &v[i]<<endl ;}

// Veamos que se emite cuando hagamos un cout de v ( v el nombre del vector)
cout << endl << endl << "Esto se emite como cout de v: " << v << endl << endl << endl;

//se mostró los mismo que con &v[0] 
//Eso significa que el nombre de v tiene un valor asociado y ese valor es la direccion del primer elemento del mismo
//En c y c++ el nombre de un vector es un puntero a la direccion del primer elemento del mismo
//v es un PUNTERO CONSTANTE (osea que no podemos hacer qeu empieze en otra parte), que corresponde a la direccion del primer elemento

/* 	Entonces v es &v[0],  v+1 es &v[1] ,    v+2 es &v[2] ......
Lo cual implica por la notacion de punteros que   v[o] es *v     v[1] es *(v+1)  ......

*/
//Vamos a emitir el contenido de v usando notacion de punteros

for (int i = 0; i < tam; i++){
	cout << "v[" << i << "]: " << *(v+i) << endl; 
}

v = v+1;

return 0;

}
