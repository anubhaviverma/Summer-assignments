
#include<iostream>
using namespace std;
int main()
{
    
     int i, n;
     cout<<"enter size ";
     cin>>n;
     int arr[n];
    cout<<"Enter elements: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Reverse array ";
    
    for(i=n-1; i>=0; i--)
    
        cout<<arr[i]<<" ";
        
    return 0;
}