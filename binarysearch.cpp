//binary search

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end =  size-1;
    int mid = (start + end)/2;

    if(arr[mid] == key){
        return mid;
    }
    while(start<=end){
        if(key > arr[mid]){
            //goto right part of array
            start = mid+1;
        }
        else{
            //goto left
            end = mid-1;
        }
        mid = (start + end)/2
    }
    return -1;
}
int main(){
    int size;
    cout<<"Enter the size of the array =";
    cin>>size;
    int arr[size];
    for(int i = 0;i< size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element that you want to find =";
    cin>>key;
    
}