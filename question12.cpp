#include<iostream>
using namespace std;
int LCM(int a, int b, int i, int l)
{
	if(i%a==0 && i%b==0)
	{
		l=i;
	}
	i--;
	if (i!=1)
	{
		LCM(a,b,i,l);
	}
	else
	{
		return l;
	}
}
int main()
{
	int a, b;
	cout<<"Enter 2 numbers respectively:\n";
	cin>>a>>b;
	int i=a*b,l=0;
	cout<<"The LCM is: "<<LCM(a,b,i,l)<<endl;
	return 0;
}
