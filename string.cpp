//string -> string is a collection of characters.
//2 types -> strings that are object of the string class(stl).


#include<iostream>
#include<string>//STL
using namespace std;


int getLength(char item[]){// \0 this is a null character..
int count=0;
for(int i = 0; item[i] != '\0';i++){
    count++;
}
return count;

}
int main(){

    /*char str[]="Hello";

    char str[100];//i have to find length over  string.
    cout<<"Enter your name:";
    //cin>> str;
    cin.getline(str, 100);
    cout<<str;?*/

    string str="Hello world, how are you";
    cout<<str;
    //cout<<str.find("world");
    cout<<str.size();


}