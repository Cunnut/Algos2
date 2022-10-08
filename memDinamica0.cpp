#include <iostream>
using namespace std;

int main()
{
int *p, *q ,i;

p=new int;

q=new int [30];

*p=13;

q[0]=15;
q[3]=-20;
cout<<*p<<endl;

for(i=0;i<10;i++)
{
  cout<<q[i]<<endl;
}

delete p;
delete [] q;

//cout<<*p<< endl;

return 0;
}

