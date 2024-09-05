#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlter(int arr[], int size){
    for(int i=0;i<size; i=i+2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){
    //odd
int arr[5]={3,6,10,2,9};

int odd[6]={2,4,5,67,8,9};

swapAlter(arr,5);

printArr(arr,5);

swapAlter(odd,6);
printArr(odd,6);

    return 0;
}