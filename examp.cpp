//Pure virtual functions

//WHY?
//if a function does n't have any use in the base class but the function must be implemented by all its derived classes

//A class that contains
#include<iostream>
using namespace std;

class Salary
{
public:
    virtual void display()=0;
};
class Fulltime:public Salary
{
public:
    void display() override
    {
        cout<<"Full time Salary = 50000"<<endl;
    }
};
class Parttime:public Salary
{
public:
    void display() override
    {
        cout<<"Part time Salary = 25000"<<endl;
    }
};
int main()
{
    Salary *s;
    Fulltime f;
    Parttime p;
    s = &f;
    s->display();
    s = &p;
    s->display();
}