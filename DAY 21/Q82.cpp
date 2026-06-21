#include <iostream>
using namespace std;
int main(){
    string s ;
    cout<<"enter word :";
    getline(cin,s);
    int start = 0,end = s.size()-1;
    while( start<end)
    {
        swap( s[start],s[end]);
        start++,end--;
    }
    cout<<s;
    }