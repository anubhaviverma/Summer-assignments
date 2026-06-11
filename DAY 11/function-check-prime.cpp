#include <iostream>
using namespace std;
bool prime ( int num){
     if(num<2){
        return 0;}
        for(int i=2;i<num;i++){
            if(num%2==0){
                return 0;
            }else 
            return 1;
            }
}
int main (){
    int num;
    cout<<"enter a number :";
    cin>>num;
 
     if(prime(num))
     cout<<num<<" is a prime number ";
     else 
     cout<<num<<" is not a prime number ";
     return 0;
}