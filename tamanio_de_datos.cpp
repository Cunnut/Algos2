# include <iostream>
using namespace std;
int main()
{  /*
   int x=1;
   float y =2.5;
   char z= 'h';
   int *p=&x;
   float *q=&y;
   char *r=&z;

   cout << " La variable entera x ocupa " << sizeof(int) <<" bytes "<<endl;
   cout << " La variable float y ocupa " << sizeof(float) <<" bytes "<<endl;
   cout << " La variable char z ocupa " << sizeof(char) <<" bytes "<<endl;

  cout << " La variable puntero a int p ocupa " << sizeof(p) <<" bytes "<<endl;
  cout << " La variable puntero a float q ocupa " << sizeof(q) <<" bytes "<<endl;
  cout << " La variable puntero a char r ocupa " << sizeof(r) <<" bytes "<<endl;

  p=NULL;
  cout << *p<<endl;
  return 0;
  
  */
  
  int *p, a=5;
float *q, f=5.7;
double *s, m=3.5;

p=&a;
q=&f;
s=&m;

cout << "p contiene " <<p<<endl;
cout << "q contiene " <<q<<endl;
cout << "s contiene " <<s<<endl;
cout << "\n\nLe sumamos 1 a cada puntero " << endl;
p=p+1;
q=q+1;
s=s+1;
cout << "p contiene " <<p<<endl;
cout << "q contiene " <<q<<endl;
cout << "s contiene " <<s<<endl;
return 0;


}

