#include <iostream>
using namespace std;
int hcf(int n1, int n2);
int main()
{
   int n1, n2;
   cout << "\n PROGRAM TO FIND HCF OF TWO NUMBERS USING RECURSION";
   cout << "\n Enter two positive integers: ";
   cin >> n1 >> n2;
   cout << "\nH.C.F of " << n1 << " & " <<  n2 << " is: " << hcf(n1, n2);
   return 0;
}
int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1 % n2);
    else 
       return n1;
}
