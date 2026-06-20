#include <iostream>
using namespace std;
int main (){
    int a[3][3];
    bool symmetric = true;
    cout<<" Enter  matrix :";
    for( int i = 1 ; i<=3;i++)
        for( int j = 1 ;j<=3;j++)
            cin>>a[i][j];
    for( int i = 1 ; i<=3;i++)
        for( int j = 1 ;j<=3;j++)
            if( a[i][j]!=a[j][i])
            symmetric = false;
            if( symmetric)
            cout<< " symmetric matrix ";
            else 
            cout<<" asymmetric matrix :";
}
