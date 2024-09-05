#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start=0; 
    int end=n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArr(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){

int arr[5]={3,8,1,6,2};
reverse(arr,5);
printArr(arr,5);


    return 0;
}