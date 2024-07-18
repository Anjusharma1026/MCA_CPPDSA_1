#include<iostream>
using namespace std;

int partitionint(int arr[], int s, int e){
    int pivot = arr[s];

    int count=0;
    for(int i= s+1; i<=0; i++){
        if(arr[i]<= pivot){
            count++;
        }
    }
    int pivotIndex = s+count;
    swap(arr[pivotIndex], arr[s]);

    int i= s, j= e;

    while(i< pivotIndex && j > pivotIndex){
        while(arr[i] < pivot){
        i++;
    }
    while(arr[i] >pivot){
        j--;
    }
    swap(arr[i++], arr[j--]);

}
return pivotIndex;
}
void quickSort(int arr[], int s, int e){
    if(s>=e) return;
}
int main(){

}