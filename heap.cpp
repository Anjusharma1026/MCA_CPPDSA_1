
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

    //DELETION

  //Replace last element with node and remove last
  //and then we check it is max herap or not if it is not a max heap then we check it with right or left child and then check it which one is greater then we replace it with that

void deleteFromHeap()
{
    if(size== 0)
    {
        return;
    }
    //replace first node with last
    arr[1]=arr[size];
    // remove krna hai last element ko
    size--;

    //take root to the corect position
    int i =1;
    while(i < size){
        int leftIndex=2*i;
        int rightIndex=2*i+1;

        if(leftIndex < size && arr[i] < arr[leftIndex])
        {
            swap(arr[i], arr[leftIndex]);
            i=leftIndex;
        }
        else if(rightIndex < size && arr[i] < arr[rightIndex]){
            swap(arr[i], arr[rightIndex]);
            i=rightIndex;
            return;
        }
        else{
            return;
        }
    }
    
}
void heapify(int arr[], int n, int i)
{
    int largest=i;
    int right =2*i+1;
    int left=2*i;
    if(left < n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if(right < n && arr[largest] < arr[right])
    {
        largest=right;
    }
    if(largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr,n,largest);
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
    // h.insert(1);
    // h.insert(2);
    // h.insert(3);
    // h.insert(5);
    // h.insert(12);
    // h.insert(7);
    // h.insert(10);
    // h.print();
    // h.deleteFromHeap();
    // h.print();
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i = n/2; i > 0; i--)
    {
        h.heapify(arr, n,i);
    }
    for(int i =0; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
}
/*Heapify (arr,size,i){
set i as largest
leftchild=2i
rightchild=2i+1
if leftchild  > arr [largest]
set leftchild as largest
if rightchuld > }
*/