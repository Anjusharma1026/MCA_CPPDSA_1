#include<iostream>
using namespace std;

class A{
    public:
    int a;
    void get(){
        cout<<"Enter the number"<<endl;
        cin>>a;
    }
};
class B:public A{
    public:
    int b;
    void get1(){
        cout<<"Enter another number"<<endl;
        cin>>b;
    }

};
class C:public B{
public:
void sum(){
    int result=a+b;
    cout<<result;
}
};
int main(){
    C obj;
    obj.get();
    obj.get1();
    obj.sum();
    return 0;
}