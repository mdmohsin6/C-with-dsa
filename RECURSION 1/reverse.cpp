#include<iostream>
using namespace std;

// void printArr(int arr[], int n){

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";

//     }cout<<endl;
// }

void reverse(int arr[], int n){
   
        int s=0;
        int e=n-1;
        while(s<e){
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }


int main(){

    int arr[]={4,6,8,9,1};
    int size=5;
    reverse(arr,5);
    // printArr(arr,5);

    //print
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}