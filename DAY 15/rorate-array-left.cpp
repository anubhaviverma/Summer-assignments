
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
        int first = arr[0];
        for( i=0;i<n-1;i++)
        arr[i]= arr[i+1];
        arr[n-1]= first;
        cout<<" array  left rotation ";
        for( i=0;i<n;i++)
        cout<<arr[i]<< " ";
    return 0;
}