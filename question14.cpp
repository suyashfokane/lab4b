#include <iostream>
#define MAX 100
using namespace std;
int arel(int arr[], int s, int len, int sum)
{
	if(s >= len)
        return sum;
	sum+=arr[s];
	arel(arr, s + 1, len, sum);
}	
int main()
{
    int arr[MAX];
    int N, i, sum;
    cout<<"Enter size of the array: ";
    cin>>N;
    cout<<"Enter elements in the array: "<<endl;
    for(i=0; i<N; i++) 
    {
       cin>>arr[i];
    }
    cout<<"Sum of elements in the array: "<<arel(arr, 0, N, 0);
    return 0;
}
 
