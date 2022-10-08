#include <iostream>
using namespace std;

void foo(int a=5, float b=0.25, char c='h')// si al invocarla no se pasa uno o nigun parametro, la funcion toma los "inicializados" y se ejecuta
{ 
   cout<<a<<"  "<<b<<"  "<<c<<endl;
}

int foo2 ( float x, float y=2.5)
{
   return x+y;
}

int main()
{
   cout<<"Invocando a foo"<<endl;
   foo ();
   foo(100),
   foo (10, 5.5);
   foo(25, 30.4, 'h');
   //importante: NO PUEDO PASAR EL PRIMER ARGUMENTO VACIO Y UN SEGUNDO VALIDO: algo como esto no es valido foo(,25)

   cout<<"Invocando a foo2"<<endl;
   cout<<foo2(1.5)  <<"     "<< foo2 (5,6) <<endl;

  return 0;
}

