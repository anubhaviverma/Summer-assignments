#include <iostream>
using namespace std;
int sum( int a,int b){
     int ans = a+b;
    return ans;
}
int main (){
    int a,b;
    cout<<"enter two number :";
    cin>>a>>b;

     cout<< "sum = "<<sum(a,b);
     return 0;
}
