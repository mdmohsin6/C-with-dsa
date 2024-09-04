#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
 cout<<arr[i]<<" ";
    }cout<<endl;
   
}


   void sort012(int a[], int n)
    {
        // code here 
        //DUTCH ALGO
        int i=0,s=0,e=n-1;
        
        while(i<=e){
            if(a[i]==0){
                swap(a[i],a[s]);
                s++;
                i++;
            }
            else if(a[i]==2){
                swap(a[i],a[e]);
                e--;
            }
            else
                i++;
        }
        return;
    }

// void sortOne(int arr[], int n){
    
    // int left=0;
    // int right=n-1;
    // while(left<right){
    //     while(arr[left]==0 & left < right){
    //         left++;
    //     }
    //     while(arr[right]==1 & left <right){
    //         right--;
    //     }
    //     if(left<right){
    //     swap(arr[left], arr[right]); 
    //         left++;
    //         right--;
    // }

    // }
    


int main(){

int arr[5]={0,2,1,2,0};

sort012(arr,5);
printArr(arr,5);

    return 0;
}