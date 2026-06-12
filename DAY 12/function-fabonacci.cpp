#include <iostream>
using namespace std;
int fabonacci(int num){ 
    int a ,b,c ;
   a= 0;
    b=1;
    if(num==0)
    cout<<a;
    else if(num==1)
    cout<<b;
    else 
    for( int i=1;i<=num;i++){

    c=a+b;
    a=b;
    b=c;
       
}
   return c;
}
int main(){
    int num;
    cout<<"enter a number :";
     cin>>num;
     //fabonacci(num);
     cout<<" fabonacci  = "<<fabonacci(num);

     return 0;
}