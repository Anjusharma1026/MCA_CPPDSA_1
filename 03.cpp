#include<iostream>
using namespace std;

void test(int n){
    n++;
    cout<<"value of n is:"<< n <<endl ;
}

int main(){
int n;
cin>>n;

test(n);
cout <<"value in main : "<< n << endl;
}
