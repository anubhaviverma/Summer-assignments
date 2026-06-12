#include <iostream>
using namespace std;
int palindrome(int num){ 
    int reverse =0 ;
    int temp=num ;
    int original=num;
    while(temp >0){
    reverse =(reverse*10)+(temp%10);
    temp = temp/10;
       
}
   return reverse==original;
}
int main(){
    int num;
    cout<<"enter a number :";
     cin>>num;
     if(palindrome(num))
     cout<<num<<" is palindrome ";
     else
     cout<<num<<" is not palindrome ";
     return 0;
}