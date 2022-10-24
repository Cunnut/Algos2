# include <iostream>
using namespace std;

int main()
{
//--------------------- Ejemplo1 ------------------------------
   int a =5, b=10;

  cout<<a<<" " <<&a<<endl;
  cout<<b<<" " <<&b<<endl;


   cout << endl;
   cout << endl;
   cout << endl;
   //--------------------- Ejemplo1 ------------------------------
  int x=1;
  int *p;
  p=&x;

  cout <<"La variable x contiene el valor "<<x<<" y esta ubicada en  "<<&x<<endl;
  cout <<"La variable p contiene el valor "<<p<<" y esta ubicada en  "<<&p<<" y *p es "<< *p<<endl;

 *p = 27;

  cout<<"La variable x contiene el valor "<<x<<" y esta ubicada en  "<<&x<<endl;
  cout<<"La variable p contiene el valor "<<p<<" y esta ubicada en  "<<&p<<" y *p es "<< *p<<endl;


   x=31;

  cout<<"La variable x contiene el valor "<<x<<" y esta ubicada en  "<< &x <<endl;
  cout<<"La variable p contiene el valor "<<p<<" y esta ubicada en  "<<&p<<" y *p es "<< *p<<endl;

     return 0;
}