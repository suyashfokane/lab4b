#include <iostream>
using namespace std;
int sumOfDigits(int n)
{ 
        if(n==0)
        {
              return 0;
        }
        else
        {
              return (n%10) + sumOfDigits(n/10);
        }
}

int main()
{
        int num;
        cout<<"PROGRAM TO PRINT SUM OF DIGITS OF A NUMBER USING RECURSSIONS";
        cout<<"\n ENTER NUMBER: ";
        cin>>num;
        cout<<"\n SUM OF DIGITS: "<<sumOfDigits(num);
        return 0;
}
