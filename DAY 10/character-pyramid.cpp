#include <iostream>
using namespace std;
int main(){
    int num;
    char name;
    cout<<"enter the number ";
    cin>>num;
    for(int i = 1;i<=num;i++){
        char ch='A';
        for( int j=1;j<=num-i;j++){
            cout<<" "; }
            for(int k=1;k<=i;k++){
                
                cout<<ch;
                ch++;
            } 
           // ch = 'A'-1;
            for(char l=1;l<=i-1;l++){
                cout<<char(ch-2);
                ch--;
            }
        
            // name++; }
        
        
     cout<<endl;}
    return 0;
}