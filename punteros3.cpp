#include<iostream>
using namespace std;

int main()
{
int *p, **pp, a=5, b=10;

p=&a;
pp=&p;
*p=35;
cout<<" a contiene este valor:  "<<a<<endl<<" a está en  " << &a<<endl;
cout<<" p contiene este valor: "<<p << endl<<" p está en  "<<&p << " *p es " << *p<<endl;
cout << " pp contiene este valor:  "<< pp << endl<<" *pp es " <<*pp << "  **pp es  " << **pp <<endl<<endl<<endl;

cout <<" Hacemos **pp=75"<< endl;
**pp=75;
cout<<" a contiene este valor:  "<<a<<endl<<" a está en  " << &a<<endl;
cout<<" p contiene este valor: "<<p << endl<<" p está en  "<<&p << " *p es " << *p<<endl;
cout << " pp contiene este valor:  "<< pp << endl<<" *pp es " <<*pp << "  **pp es  " << **pp <<endl<<endl<<endl;

cout <<" Hacemos *pp=&b"<< endl;
*pp=&b;
cout<<" a contiene este valor:  "<<a<<endl<<" a está en  " << &a<<endl;
cout<<" p contiene este valor: "<<p <<endl<< " p está en  "<<&p << " *p es " << *p<<endl;
cout << " pp contiene este valor:  "<< pp << endl<<" *pp es " <<*pp << "  **pp es  " << **pp <<endl<<endl<<endl;

return 0;

}

