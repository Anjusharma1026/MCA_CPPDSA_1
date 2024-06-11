//write a program to print input age and then print adult or not 
#include<iostream>
using namespace std;

int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<"You are an adult:";

    }
    else{
     cout<<"you are not an adult:";
    }    
    return 0;

}