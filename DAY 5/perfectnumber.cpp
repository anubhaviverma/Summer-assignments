#include <iostream>
using namespace std;
int main(){
    int n, sum= 0;
    cout<<"enter the number :"<<endl;
    cin>>n;
    for(int i = 1 ; i<n; i++){
        if( n%i==0){
            sum = sum +i;
        }else {
            sum = sum ;
        }
    }
  if ( n == sum ){
    cout<<" number is perfect "<<endl;
  }
  else { 
    cout<<"number is not perfect number"<<endl;
  }
 return 0;
}