#include<iostream>
using namespace std;

int getSum(int arr[], int n){
    int sum=0;
    for(int i=0; i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){


int arr[6]={2,5,1,8,4,9};
// cout<<"sum is " <<getSum(arr,5)<<endl;

//last ke 3 ka sum chahiye (arr+3, 3 size)

cout<<"sum is " <<getSum(arr+3,3)<<endl;

    return 0;

}