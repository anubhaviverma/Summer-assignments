#include <iostream>
using namespace std;
int main(){
    int num, isprime, largest = 0 ;
    cout <<"enter a number"<<endl;
    cin>>num;
    for ( int i = num; i>=2; i--){
        if ( num %i==0){
        isprime = 1;
        for(int j=2;j<i;j++){
            if(i%j==0){
              isprime =0;
              break;
            }

        }
        if (isprime){
            largest = i;
            break;
        }
    }

        }
            cout<<" largest number : "<<largest;            
                

            
        
    
    return 0;
}