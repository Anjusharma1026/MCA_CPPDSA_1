//array is a linear data structure where all elements arranged in sequentially......

//storing a same type of data in array...

#include<iostream>

using namespace std;

/*int main(){
    int arr[3]={3,4,5};
    //int hello[5]={1,2,3,4,5};

    //how to display array using foreach loop..
    for(int item : arr){
    //for(int item : hello) 
    cout<< item << " ";

    }
    arr[0] = 10;

    cout<< endl;

    for(int item : arr){
        cout << item << " ";
    }

}*/



/*int main(){

int arr[5]={1,3,4,5,6};

cout<<"Enter 5 numbers "; //sum of the array
int sum =0;
for(int i=0;i<5;i++){
    sum +=arr[i];
    
}
cout<< sum<<endl;

}

*/


/*int main(){
    int arr[5]={2,6,8,9,3};
    int max = INT_MAX;*/

    void arry(int arr[], int size){
         int max = 0;
        for(int i=0;i< size; i++){
            if(arr[i] < max){
                max=arr[i];
            }
        } 
        cout<< max;
    }
int main(){
    int arr[5]={1,4,6,8,9};
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    arry(arr,5);

}

