#include <iostream>
using namespace std;
int perfectnumber(int num){ 
    int sum=0;
    for( int i=1;i<num;i++){
        if(num%i==0)
        sum= sum +i;
        
    }return sum==num;
       
}
int main(){
    int num,sum;
    cout<<"enter a number :";
     cin>>num;
     if(perfectnumber(num))
     cout<<num<<" is perfect number ";
     else
     cout<<num<<" is not perfect number ";
     return 0;
}