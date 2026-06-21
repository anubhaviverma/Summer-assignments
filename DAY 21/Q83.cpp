#include <iostream>
using namespace std;
int main(){
    string s ;
    int vowel = 0,consonants= 0;
    cout<<"enter word :";
    getline(cin,s);
    
    for( int i=0;i<=s.size()-1;i++){
        char ch=s[i];
        if(( ch>='a'&&ch<='z')||( ch>='A'&&ch<='Z'))
    if( ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
    vowel++;
    }
    else
    consonants++;
}
    cout<<"vowel  ="<<vowel<<" ";
    cout<<" consonants ="<<consonants<<" ";
}
