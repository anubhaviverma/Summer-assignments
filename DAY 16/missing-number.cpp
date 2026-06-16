#include <iostream>
using  namespace std;
int main (){
  int n;
  cin>>n;
  int arr[n-1];
  int sum= 0;
  for( int i=0;i<n-1;i++){
    cin>>arr[i];
    sum = sum + arr[i];
  } 
   int total = n*(n+1)/2;
  int result = total- sum;
  cout<< "missing number "<<result;
  return 0;
}