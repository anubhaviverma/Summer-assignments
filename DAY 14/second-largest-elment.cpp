
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
    int largest = arr[0];
     int secondlargest = arr[0];
    for(i=0; i<n; i++)
    { if( arr[i]>largest ){
        secondlargest = largest;
        largest = arr[i];
    }
    else if(arr[i]>secondlargest && arr[i]!=largest){
          secondlargest =arr[i];
    }
}
        
        
            cout<<" secondlargest "<<secondlargest;
            return 0;
            
}