#include <iostream>
using namespace std;
int main(){
    int n, f, sum = 0 , rem;
    cout<<"enter a number "<<endl;
    cin>>n;
    int t = n;
    while( n>0){
        rem = n%10;
        f= 1;
        for(int i=1;i<=rem;i++){
          f= f*i;

        }
        sum = sum +f;
        n= n/10;
    } if ( sum ==t){
        cout<<"strong number"<<endl;
    }else {
        cout<<"not strong number"<<endl;
    }
    return 0;
}