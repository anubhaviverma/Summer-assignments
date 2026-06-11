#include <iostream>
using namespace std;
int fact(int num){
    int ans = 1;
    for(int i=1;i<=num;i++){
         ans = ans * i;
    } return ans;
}
int main(){
    int num;
    cout<<"enter a number :";
    cin>>num;
    cout<<"factorial :"<<fact(num);
    return 0;
}