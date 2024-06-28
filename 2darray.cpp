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

//sum of the matrix

int isSum(int arr[][4], int row, int col ){
    int sum =0;
for(int row=0; row< 3;row++){
    for(int col=0; col<4;col++){
        sum = sum +arr[row][col];
        }
    }
    return sum;
}

//maximum
int isMax(int arr[][4], int row, int col ){
    int max=INT_MIN;
    int rowIndex=-1;
for(int row=0; row< 3;row++){
    int sum =0;
    for(int col=0; col<4;col++){
        sum = sum +arr[row][col];
        }
        if(sum>maximum){
            maximum = sum;
            rowIndex= row;
        }
    }
    cout<<"Max sum is:" <<maximum<<endl;
    return rowIndex;
}
//waveprinting
void wavePrint(int arr[][4], int row, int col){
    for(int col=0; col< 4;col++){
        if(col%2==0){
            for(int row =0; row<3;row++){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            for(row = row-1; row>=0;row--)
                cout<<arr[col][row] <<" ";
            
        }
    }
    cout<<endl;
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

    cout<<isKeyPresent(arr,4,3,4)<<endl;
    cout<< isSum(arr,3,4)<<endl;
    cout<< isMax(arr,3,4);
    cout<< wavePrint(arr,3,4);
    return 0;
}