//wave printing code

#include<iostream>
using namespace std;

void wavePrint(int arr[][4], int row, int col){
    for(int col=0; col< 4;col++){
        if(col%2==0){
            for(int row =0; row<3;row++){
                cout<<arr[row][col];
            }
        }
        else{
            for(row = row-1; row>=0;row--)
                
            
        }
    }
}