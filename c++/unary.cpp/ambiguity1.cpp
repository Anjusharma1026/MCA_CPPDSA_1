#include<iostream>
using namespace std;
class A{
    private:
    int z;
    protected:
    int y;
    public:
    int x;

    void fun A()
    {
        x=10;
        y=5;
        z=15;
    }
};
class B:public A{
    public:
    void funB()
    {
        x=15;
        y=25;
        
    }
    void Display B()
    {
        
    cout<<"class B Accessing x:"<<x<<endl;
    cout<<"class B Accessing y:"<<x<<endl;


    }
};
class C:protected A
{
    public:
    void funC()
    {
        
    }
}