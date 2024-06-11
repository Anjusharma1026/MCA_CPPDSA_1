#include<iostream>
using namespace std;
void test(int x)
{
    try {
        if(x>0)
        throw x;


    }catch(int x){
        cout<<"\n catch a character and that character is :" <<x<<endl;
    }
}
int main(){
    cout<<"test multiple catches:\n\n";
    test(10);
    test(20);
    test(30);
    return 0;
}
