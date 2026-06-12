
#include <iostream>
#include <cmath>
using namespace std;
int countdigit(int n){
    int count = 0;
    while(n>0){
        count++;
        n/=10;
    }return count;
}
bool armstrong(int num){ 
    int n= num,ans = 0,rem;
    int digit = countdigit(num);
    
    while(n >0){
    rem = n%10;
    ans = ans + pow(rem,digit);
    n=n/10;
} return ans== num;


}

int main(){
    int num;
    cout<<"enter a number :";
     cin>>num;
     if(armstrong(num))
     cout<<num<<" is armstrong ";
     else
     cout<<num<<" is not armstrong ";
     return 0;
}