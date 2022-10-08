#include<iostream>
using namespace std;

int main ()
{
int a, b, *p, *q;
a=10;
b=20;

printf ("Se ejecuta p=&a; q=&b;\n");
p=&a;
q=&b;

cout<< "La variable a esta en "<<&a << " y contiene " << a<<endl;
cout<< "La variable b esta en "<<&b << " y contiene " <<b<<endl;

cout<< "La variable p esta en "<<&p << " y contiene " << p<<" y la dirección almacenada en p contiene "<< *p<<endl;
cout<< "La variable q esta en "<<&q << " y contiene " << q<<" y la dirección almacenada en q contiene "<< *q<<endl;


printf ("\nSe ejecuta *p=35:\n");
*p=35;
cout<< "La variable a esta en "<<&a << " y contiene " << a<<endl;
cout<< "La variable p esta en "<<&p << " y contiene " << p<<" y la dirección almacenada en p contiene "<< *p<<endl;


printf ("\nSe ejecuta b=65");
b=65;
cout<< "La variable b esta en "<<&b << " y contiene " <<b<<endl;
cout<< "La variable q esta en "<<&q << " y contiene " << q<<" y la dirección almacenada en q contiene "<< *q<<endl;

*p = *q;
cout << " Se ejecuta *p=*q"<<endl;
cout<< "La variable a esta en "<<&a << " y contiene " << a<<endl;
cout<< "La variable b esta en "<<&b << " y contiene " <<b<<endl;
cout<< "La variable p esta en "<<&p << " y contiene " << p<<" y la dirección almacenada en p contiene "<< *p<<endl;
cout<< "La variable q esta en "<<&q << " y contiene " << q<<" y la dirección almacenada en q contiene "<< *q<<endl;


p=q;
cout << "Se ejecuta p=q"<< endl;
cout<< "La variable a esta en "<<&a << " y contiene " << a<<endl;
cout<< "La variable b esta en "<<&b << " y contiene " <<b<<endl;
cout<< "La variable p esta en "<<&p << " y contiene " << p<<" y la dirección almacenada en p contiene "<< *p<<endl;
cout<< "La variable q esta en "<<&q << " y contiene " << q<<" y la dirección almacenada en q contiene "<< *q<<endl;


return 0;
}

