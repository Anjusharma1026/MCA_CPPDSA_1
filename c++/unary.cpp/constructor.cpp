#include<iostream>
using namespace std;

class Z{
    public:
    Z()
    {
        cout<< "Constructor called" << endl;

    }
    ~Z(){
        cout<< "Destructor called" << endl;

    }
};
void manageObjects(){
    int numObjects;
    cin >>numObjects;
    Z objects[numObjects];

}
int main(){
    manageObjects();

    return 0;
}