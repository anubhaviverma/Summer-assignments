
#include<iostream>
using namespace std;
int main()
{
    
     int i, n;
     cout<<"enter size ";
     cin>>n;
     int arr[n];
    cout<<"Enter n Numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
        int last = arr[n-1];
        for( i=n-1;i>0;i--)
        arr[i]= arr[i-1];
        arr[0]= last;
        cout<<" array  right rotation ";
        for( i=0;i<n;i++)
        cout<<arr[i]<< " ";
    return 0;
}