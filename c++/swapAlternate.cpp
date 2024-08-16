#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

//step2 function bnaoo

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i=i+2){
        if(i+1<size ){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){


    int arr[6]={3,7,1,4,9,6};
    int odd[3]={33,99,66};
    swapAlternate(arr,6);
    swapAlternate(odd,3);

    printArray(arr,6);
    printArray(odd,3);


    return 0;

}