
#include<iostream>
using namespace std;
int main()
{
    
     int i, n, key,count=0;
     cout<<"enter size ";
     cin>>n;
     int arr[n];
    cout<<"Enter n Numbers: ";
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nEnter element : ";
    cin>>key;
    for(i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            count++;
            
        }
    }
    cout<<" Frequency = "<<count;
    return 0;
}