#include <iostream>
using namespace std;
int main (){
    int arr[1000];
    int n;
    cout<<"enter size of array :";
    cin>>n;
    cout<<" enter element in array :";
 for( int i= 0;i<n;i++){
        cin>>arr[i];
    }
    for ( int i= 0;i<n;i++){
        for( int j= i+1;j<n;j++){
            if( arr[i]<arr[j]){
                int temp = arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }
    cout<<" descending order : ";
    for( int i= 0;i<n;i++){
        cout<<arr[i]<<" ";
    } return 0;
}