#include<iostream>
#include<algorithm>
using namespace std;

string pairSum(vector<int> vec, int size, int target){
    sort(vec.begin(), vec.end());
    int i = 0;
    int j = size - 1;
    while( i<=j){
        int sum;
        sum = vec[i] + vec[j];
        if(sum == target) return "yes";
        else if(sum < target) i++;
        else j--;
    }
    return "No";
}
int main(){

}

//maximum subarray kadance algo...
//binary search....

#include<iostream>
using namespace std;
