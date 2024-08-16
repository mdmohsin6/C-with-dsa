#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void reverseArray(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}


int main(){

    int arr[5]={3,7,1,9,2};

    reverseArray(arr,5);
    printArray(arr,5);


    return 0;
}