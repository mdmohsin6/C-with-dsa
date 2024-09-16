#include<iostream>
using namespace std;

int getSum(int *arr, int size){
// step 2
    //base case 
    if(size==0){
        return false;
    }
    if(size==1){

        //return arr la woh index
        //jo ellemnt woh return 
        return arr[0];
    }
    //step 4
    int remainingPart= getSum(arr+1, size-1);
    //step 3
    //sum kya hoga current elem, + remainngn part
    int sum= arr[0] + remainingPart;
    return sum;
}

int main(){
    int arr[]={3,4,5,8,1};
    int size=5;

//step 1 call a funct
    int sum= getSum(arr,5);

    cout<<"sum is "<<sum<<endl;


    return 0;
}