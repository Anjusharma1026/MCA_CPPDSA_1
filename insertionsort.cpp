#include<iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for(int i = 0; i< size; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}
int main(){
    int arr[]= {2, 3, 4, 1,  1, 5,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout<< "Sorted Array:";
    for(int i =0; i< n;i++){
        cout<<arr[i] <<" ";
    }
    cout<< endl;

    return 0;
    
}
