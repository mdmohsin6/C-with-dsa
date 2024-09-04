#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void negPosi(int arr[], int n){
  
        int s=0;
        int e=n-1;
        while(s<e){
              if(arr[s]<0 && arr[e]>0){
            s++;
            e--;
        }
        else if(arr[s]>0 && arr[e]<0){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        else if(arr[s]<0 && arr[e]<0){
            s++;
        }else{
            e--;
        }
    }
        }
      


int main(){

    int arr[5]={-1,4,2,-7,9};
    negPosi(arr,5);

    printArr(arr,5);
    



    return 0;
}
