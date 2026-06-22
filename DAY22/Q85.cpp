#include<iostream>
using namespace std;
int main (){
    string s;
    cout<< " enter string :";
    getline( cin,s);
    int start = 0, end= s.size()-1;
    while( start<end){
    if( s[start]!=s[end]){ 
    cout<<s<<" not  palindrome";
    return 0;
}
    start++,end--;
}

    cout<<s<<" palindrome ";
}