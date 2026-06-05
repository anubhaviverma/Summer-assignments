#include <iostream>
using namespace std;
int main(){
    int num  , i;
    cout<<"enter a number: "<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        if( num%i==0){
            cout<<i<<endl;
        }else{
            cout<<""<<endl;
        }
    }
 return 0;
}
