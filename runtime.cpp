//runtime polymorphism/late binding
//virtual function is a function in the base class that you redifine in a derived class.
// virtual func must be member of some class.
//they are accesed through object pointers.
//a virtual fuc must be define in a base class ,even though  it is not used.
#include<iostream>
using namespace std;

class Base{
    public:
     virtual void display(){
        cout <<"From base"<<endl;
    }
};
class Derived{
    public:
    void display(){
        cout<<"From derived "<<endl;
    }
};
int main(){
    Derived d1;
    Base *ptr=&d1;
    ptr->display;
}