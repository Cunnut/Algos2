/* La sobrecarga es un mecanismo de los lenguajes orientados a objetos que habilita a diseñar 
funciones que tiene el mismo identificador pero que difieren en tipo y/o número de argumentos.
En tiempo de compilación el sistema determina cuál de los códigos es el que corresponde ejecutar,
 en base al análisis de los argumentos de llamada.
 */
 
 #include <iostream>
using namespace std;

void mostrar (char x, int y)
{
  cout<<"El primer argumento  vale "<<x <<" y el segundo argumento vale "<<y<<endl;

}

void mostrar (float a, float b, float c)
{

 cout<<"El primer argumento  vale "<<a <<"  el segundo argumento vale "<<b<<" y el tercer argumento vale "<< c <<endl;
 cout<<"La suma de los tres reales pasados por argumento es " << a+b+c<<endl;
}


int main()
{
  cout << "Invocamos a mostrar con argumentos 'h' y 7"<<endl;
  mostrar ('h', 7);
  cout << "Invocamos a mostrar con argumentos 0.5 , 6.4, y 0.75 "<<endl;
  mostrar (0.5, 6.4, 0.75);
  int m=8;
  char a='s';
   cout << "Invocamos a mostrar con argumentos entero m y char a"<<endl;
  mostrar(a, m);
  return 0;
}
