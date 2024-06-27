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
    //creating 2d array.
    int arr[3][4];
    //taking user input
    //int arr[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12}; we can initialize this type also
    //int arr[3][4]={1,2,3,4}, {5,6,7,8},{9,10,11,12};

    for(int row=0; row < 3;row++){
        for(int col=0; col < 4; col++){
            cin>>arr[row][col];
        }
    }
    //print
    for(int row=0; row <3;row++){
        for(int col=0; col<4; col++){
            cout<< arr[row][col] <<" ";
        }
        cout<<endl;
    }

    cout<<isKeyPresent(arr,4,3,4);
    return 0;
}