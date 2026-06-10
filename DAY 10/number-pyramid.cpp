#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number ";
    cin>>num;
    for(int i = 1;i<=num;i++){
        for( int j=1;j<=num-i;j++){
            cout<<" ";
        }
            for(int k=1;k<=i;k++){
                cout<<k; }
                for(int l=i-1;1<=l;l--){
                    cout<<l;
                }
                
                
            
     cout<<endl;
    }
    return 0;
}