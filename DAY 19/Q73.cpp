#include <iostream>
using namespace std;
int main (){
    int a[3][3],b[3][3],c[3][3];
    cout<<" Enter first matrix :";
    for( int i = 1 ; i<=3;i++)
        for( int j = 1 ;j<=3;j++)
            cin>>a[i][j];
      
         cout<<" Enter second matrix :";
    for( int i = 1 ; i<=3;i++)
        for( int j = 1 ;j<=3;j++)
            cin>>b[i][j];

    for( int i = 1 ; i<=3;i++)
        for( int j = 1 ;j<=3;j++)
            c[i][j]=a[i][j]+b[i][j];
            cout<<"sum matrix :\n"; 
    for( int i = 1 ; i<=3;i++)
        for( int j = 1 ;j<=3;j++)
            cout<<c[i][j]<<" ";
            cout<<endl;    
    
}
