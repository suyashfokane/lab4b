#include <iostream>
#define MAX 100
using namespace std;
void arel(int arr[], int s, int len)
{
    if(s >= len)
        return;
    cout<<arr[s]<<endl;
    arel(arr, s + 1, len); 
}
int main()
{
    int arr[MAX];
    int N, i;
    cout<<"Enter size of the array: ";
    cin>>N;
    cout<<"Enter elements in the array: "<<endl;
    for(i=0; i<N; i++) 
    {
       cin>>arr[i];
    }
    cout<<"Elements in the array: ";
    arel(arr, 0, N);
    return 0;
}
