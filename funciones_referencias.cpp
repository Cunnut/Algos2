//Referencia retornada

#include <iostream>
using namespace std;
int    fun (int &x)
{
  x=x+30;
  std::cout<<"\n Dentro de la función fun x ahora vale "<<x<<endl;
  std::cout<<"\n x se devuelve como referencia no constante "<<endl;
  return x;
}

int main()

{
int a=1;
cout<<"La funcion fun incrementa el argumento en 30 \ny retorna una referencia no constante del argumento pasado"<<endl;
cout <<"Se asigna 1 a la variable a"<<endl;
cout << "\nSe ejecuta fun (a). \n Valor emitido: fun(a) = "<< fun(a) << endl;
a=1;
cout <<"\nSe asigna 1 nuevamente a la variable a"<<endl;
fun(a) = 9;
cout << "\n Se ejecuta fun (a)=9. Valor de a:"<< a<< endl;
cout<<"\nCuando una funcion retorna una referencia no constante, \nlo retornado puede aparecer a la izquierda en una asignacion"<<endl;
cout<<"\nSi en la funcion fun no se retorna una referencia, \nlo retornado es rvalue, no lvalue\nComprobarlo quitando el & en el retorno de fun (dara error en fun(a)=9, por no ser lo retornado lvalue)"<<endl;
return 0;
}

