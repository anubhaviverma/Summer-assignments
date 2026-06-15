
#include<iostream>
using namespace std;
int main()
{
    
     int i, n, key;
     cout<<"enter size ";
     cin>>n;
     int arr[n];
    cout<<"Enter n Numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nEnter a Number to Search: ";
    cin>>key;
    for(i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            cout<<" element found position  "<<i+1;
            return 0;
            
        }
    }
    cout<<"\nelement not found ";
    return 0;
}