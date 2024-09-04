#include<iostream>

using namespace std;
void printArr(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}


void rotate(int arr[], int n){
    int i=0, j=n-1;
    while(i<=j){
        swap(arr[i], arr[j]);
        i++;
    }

}

int main(){
    int arr[5]={2,7,1,9,3};
    rotate(arr,5);
    printArr(arr,5);
    

    return 0;
}