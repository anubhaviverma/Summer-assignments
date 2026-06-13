#include <iostream>
using namespace std;
int main(){
    int arr[5],sum=0;
    float avg;
    cout<<"Enter 5 element :";
    for(int i=0;i<5;i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    avg = (float)sum/5;

    cout<<"sum :"<<sum<<endl;
    cout<<"avg :"<<avg;
    
     return 0;}