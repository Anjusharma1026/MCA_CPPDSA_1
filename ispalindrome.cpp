#include<iostream>
using namespace std;

bool isPalindrome(char arr[], int size){
    int start = 0;
    int end = size -1;
    while(start <= end){
    if(toLowerCase(arr[start]))!= toLowerCase(arr[end]){
        return false;
    }
    else{
        start++;
        end--;
    }

    }
    return true;
}
int main(){
    
}
