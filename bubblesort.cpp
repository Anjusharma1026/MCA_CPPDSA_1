#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i = size-1; i>=0; i--){
        int hasSwapped = 0;
        for(int j = 0; j<= i-1; j++){
            if(arr[j] > arr[j+1]){
            swap(arr[j] ,arr [j+1]);
            hasSwapped = 1;
            }
        }
        if(hasSwapped == 0) break;
    
    }
}

int main(){
    int arr[]= {2, 3, 4, 1,  1, 5,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout<< "Sorted Array:";
    for(int i =0; i< n;i++){
        cout<<arr[i] <<" ";
    }
    cout<< endl;

    return 0;
    
}
