#include <iostream>
using namespace std;
int main (){
    int a[3][3],sum = 0;
    cout<<" Enter  matrix :";
    for( int i = 1 ; i<=3;i++)
        for( int j = 1 ;j<=3;j++)
            cin>>a[i][j];
    for( int i = 1 ; i<=3;i++){
        for( int j = 1 ;j<=3;j++)
            sum+=a[i][j];
            cout<<" row"<<i+1<<" sum="<<sum<<endl;}
}