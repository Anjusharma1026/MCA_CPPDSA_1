#include<iostream>
using namespace std;
class Myclass{
    int value;
    public:
    Myclass(int v) : value(v){}
    Myclass operator-(){
        return Myclass(-value);
    }
    int getValue() const {
        return Value;
    }
};
int main(){
    Myclass obj(B);
    Myclass __result_of_memfun
}