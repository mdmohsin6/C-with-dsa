#include<iostream>

using namespace std;
 
 int kthSmallest(int arr[], int n,int k) {
   
       sort(arr.begin(),arr.end());
        return arr[k-1];
    }
    