//friend function
#include<iostream>
using namespace std;

class Distance{
    private:
    int m;
    friend int increasedistance(distance);
    public:
    distance(){
        m = 10;
    }
};
int increasedistance(distance d){

    d.m += 10;
    return d.m;
}
int main(){
    distance d1;
    cout<<"Distance is :"<<increasedistance()<<endl;
}