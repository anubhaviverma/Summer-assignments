#include <iostream>
using namespace std;
int main (){
    int x,n ,power= 1 ;
    cout<<" enter the value of x :";
    cin>>x;
    cout<<"enter the value of n :";
    cin>>n;
    for( int i = 0;i<n;i++){
        power*= x;

    }cout<< "x^n is "<<power;
    return 0;
}