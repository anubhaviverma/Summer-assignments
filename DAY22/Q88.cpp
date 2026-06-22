#include<iostream>
using namespace std;
int main (){
    string s;
    cout<< " enter string :";
    getline( cin,s);
    string  ans= "";
    for( int i=0;i<s.size();i++){
        if( s[i]!=' '){
            ans +=s[i];

        }
    }cout<<ans;
}