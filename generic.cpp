//templates.
#include<iostream>
using namespace std;
template<class T>
class Add{
    private:
    T a;
    T b;
    public:
    add(T A, T B){
        a = A;
        b = B;
    }
    getadd(){
        return a+b;
    }
    display(){
        cout<<a+b<<endl;
    }

} ;
int main(){
    add<int> a1(3,6);
    add<float> a2(10.9,20.3);
    add<double> a3(10.2330,33.3550);
    a1.display();
    a2.display();
    a3.display();
}