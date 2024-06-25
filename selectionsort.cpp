#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){

    for(int i = 0; i < size-1; i++){
        int minIdx = i;
        for(int j = i+1; j< size; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
            swap(arr[minIdx], arr[i]);
        }
    }
   
}

 int main(){
    int arr[]= {2, 3, 4, 1,  1, 5,3};
    
}

