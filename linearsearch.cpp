#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return true;
        }
    }
        
            return false;
        }
    


int main(){
    int arr[5]={2,4,6,7,3};
    cout<<linearSearch(arr,5,2);
}

/*pair sum
triplet sum
find unique elements
find duplicate
sort 0's and 1's
*/


