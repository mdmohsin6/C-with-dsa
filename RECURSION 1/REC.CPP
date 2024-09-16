#include<iostream>
using namespace std;

// pointer h ye
//int arr[] ko int *arr bi kr skte
bool isSorted(int arr[], int size){
    //base case
    if(size==0 || size==1){
        return true;
    }
    //phle index ko compare kra lya so that ek space km aaghe s
    if(arr[0]>arr[1]){
        return false;
    }else{
        //phla elemetn ht gya h so arr +1, or size bi kam hojayegi
        bool remainingPart= isSorted(arr + 1, size-1);
        return remainingPart;
    }

}

int main(){

int arr[6]={3,4,5,6,12,8};
int size=6;


//function call
bool ans=isSorted(arr,size);

if(ans){
    cout<<"sorted"<<endl;
}else{
    cout<<"not sorted"<<endl;
}

    return 0;
}