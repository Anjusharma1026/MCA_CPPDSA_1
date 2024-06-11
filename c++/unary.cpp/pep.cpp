#include<iostream>//ritik wants a magic board.
using namespace std;

class Convert{
    private:
    int n;
    int *arr;

    public:

    Convert(){
        cout<<"Enter n:";
        cin>>n;
        arr=new int[n]

    }
    void getInput(){
        if(n<4||n>4){
            cout<<"Invalid";
            return;
        }
        for(int i=0;i<4;i++){
            cin>>arr[i];
        }
    }
    void print(){
        if(n<4||n>4){
            cout<<"No Data";
            return ;
        }
        for(int i=0;i<4;i++){
            char x;
            x=arr[i];//integer to character
            cout<<x;
        }
    }
    int main(){
        Convert c1;
        c1.getInput();
        c1.print();
        return 0;
    }

}