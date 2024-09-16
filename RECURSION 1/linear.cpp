#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k){
    //base cASE

    if(size==0){
        return  false;
    }
    if(arr[0]==k){
        return true;
    }
    else{

        bool remainingPart= linearSearch(arr+1, size-1, k);
        return remainingPart;
    }
}

int main(){

int arr[]={4,1,2,9,6};
int size=5;
int k=66;

bool ans= linearSearch(arr,size, k);
if(ans){
    cout<<"element found"<<endl;
} else{
    cout<<"element not found";
}
    return 0;
}