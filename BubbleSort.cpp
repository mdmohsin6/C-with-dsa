#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0 ;i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}


void bubbleSort(int arr[], int n){
    for(int i =1; i<n; i++){

        for(int j =0; j<n-i; j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
   int arr[5]={2,7,4,3,9};
    bubbleSort(arr,5);
    printArr(arr,5);
    cout<<"sorted "<<endl;



    return 0;
}