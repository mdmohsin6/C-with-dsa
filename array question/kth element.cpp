#include<iostream>

using namespace std;
 
 int kthSmallest(vector<int> &arr, int k) {
   
       sort(arr.begin(),arr.end());
        return arr[k-1];
    }
    