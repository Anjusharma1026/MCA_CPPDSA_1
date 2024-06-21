//pure virtual function.
//why 
//if a func doesnt have any use in the base class but the funtion must be implemented by 
//all its derivedclasses.

#include<iostream>
using namespace std;

class A{
    public:
     virtual void display(){
        cout <<"From B"<<endl;
    }
};
class B:public A{
    public:
    void display(){
        cout<<"From C "<<endl;
    }
};
int main(){
    
}

