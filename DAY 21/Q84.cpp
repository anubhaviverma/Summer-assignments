#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<" enter string :";
    getline( cin,s);
    for( int i = 0;i<=s.size()-1;i++){
        if( s[i]>='a'&&s[i]<='z'){
            s[i]=s[i]-32;
        }
    }
    cout<<" uppercase :"<<s;
}