#include<iostream>
using namespace std;

// void print(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

void unique(int arr[], int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){

    int arr[5]={1,1,5,3,3};

    return 0;
}