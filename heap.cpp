#include<bits/stdc++.h>
using namespace std;
// heap-> it is a complete binary tree that commes with a heap order property
// CBT(complete binary tree)-> every level is completely filled except the last level, here nodes are always added from left
//heap order property-> 
//max heap-> parent is always greater than child
//mean heap-> parents is always smaller than child
//for parent i/2
//for 1 index 
    // 1thleft child=2*i
    // IIth right child=2*i+1

//for(0 index)
// Ith left child=2*i+1
//for right child= 2*i+2

//create heap
class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
        arr[0]=-1;
        size=0;;
    }
    void insert(int val)
    {
        size=size+1;
        int index=size;
        arr[index]=val;
        while(index > 1){
            int parent=index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index=parent;
            }
            else{
                return ;
            }
        }
    }
    void print()
    {
        for(int i =1; i <= size;i++)
        {
            cout<<arr[i] <<" ";
        }
        cout<<endl;
    }
};
int main(){
    Heap h;
    h.insert(1);
    h.insert(2);
    h.insert(3);
    h.insert(5);
    h.insert(12);
    h.insert(7);
    h.insert(10);
    h.print();

    
}