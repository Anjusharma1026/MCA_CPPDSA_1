#include<iostream>
#include<algorithm>
using namespace std;

//if there are k elements after removing the duplicates, then the first k elements 
//of the array should hold the final result. it does not matter
int uniqueElements(int arr[], int size){
    int i=0;
    for(int j = i + 1; j< size; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
            
        }
    }
    return i+1;
}
int main(){
    int arr[]= {1,1,2,2,2,3,3};
    int k = uniqueElements(arr,7);
    for(int i = 0; i< k; i++){
     cout<<arr[i]<<" ";
    }
    

}