#include <iostream>
using namespace std;
int main (){
    int a[3][3];
    cout<<" Enter first matrix :";
    for( int i = 1 ; i<=3;i++)
        for( int j = 1 ;j<=3;j++)
            cin>>a[i][j];
            cout<<"tranpose  matrix :\n"; 
    for( int i = 1 ; i<=3;i++)
        for( int j = 1 ;j<=3;j++)
            cout<<a[j][i]<<" ";
            cout<<endl;    
    
}
