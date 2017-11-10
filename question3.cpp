#include <iostream>
using namespace std;
int evenodd(int n1, int n2)
{
 if((n1+1)!=n2)
 {
  if((n1+1)%2==0)
  {
   cout<<"\n"<<n1+1<<" is an even number";
   evenodd(++n1,n2);
  }
  else 
  {
   cout<<"\n"<<n1+1<<" is an odd number";
   evenodd(++n1,n2);
  }
 }
}
int main()
{
  int n1, n2;
  cout<<"Enter 2 numbers respectively:\n";
  cin>>n1>>n2;
  evenodd(n1, n2);
  return 0;
}
