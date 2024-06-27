//return a maximum occuring character in an input string.
//you are given a string words,you need to replace all the spaces with "@9"
//remove all the occurences of a substring -> on leetcode check pluton
//

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
 void replaceSpaces(string n){
    string rep = "@9";
    for(int i =0; i<n.length(); i++){
        if(n[i]==' ')
        n.replace (i,1,rep);
    }
    cout<<n;
 }

 int main(){
    string m="hello world how are you";
    replaceSpaces(m);
    return 0;
 }