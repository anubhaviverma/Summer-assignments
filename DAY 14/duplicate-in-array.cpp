
#include<iostream>
using namespace std;
int main()
{
    
     int i, n;
     cout<<"enter size ";
     cin>>n;
     int arr[n];
    cout<<"Enter element : ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Duplicate element are: ";
    for(i=0; i<n; i++)
    {
        for( int j=i+1;j<n;j++){
        if(arr[i]==arr[j])
        {
            cout<<arr[j]<< " ";
            return 0;
        }
            
        }
    }
    
    return 0;
}