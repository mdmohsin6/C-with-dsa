#include<iostream>
using namespace std;

bool Binarysearch(int *arr, int s, int e, int key){

    //base case
    //element not found
    if(s>e)
        return false;
         int mid= s + (e-s)/2;
        //elem found
    if(arr[mid]==key)
        return true;
     

       
//right part m jap
        if(arr[mid]< key){
          return   Binarysearch(arr, mid+1, e, key);

            }
            //left part
            else{
                return Binarysearch(arr,s, mid-1,key);

            }

        }
    



int main(){
    int arr[6]={3,5,7,8,9};
    int size=6;
    int key=12;

//phla arr, strt index. end index,
//found 1 
//not found 0
    cout<<"present or not : "<<Binarysearch(arr,0,5,key)<<endl;


    return 0;
}