#include<iostream>
#include<string>
using namespace std;
int main (){
    char s[100];
    int character_frequency= 0;
    char character ;
   cout<< " enter string :";
    cin.getline( s,100);
    cout<<" enter character ";
    cin>>character;
    for(int i=0;s[i]!='\0';i++){
        if( s[i] ==character){
            character_frequency++;

        }
    }
    cout<<character_frequency<<" character frequency ";
    return 0;
}