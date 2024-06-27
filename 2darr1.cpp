#include<iostream>
using namespace std;

bool isKeyPresent(int arr[][4], int target, int row, int col ){
for(int row=0; row< 3;row++){
    for(int col=0; col<4;col++){
        if(arr[row][col]==target){
            return true;
        }
    }
}
return false;
}

int main(){
    int arr[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};
}