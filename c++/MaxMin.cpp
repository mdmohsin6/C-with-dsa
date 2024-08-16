#include<iostream>
#include <limits.h>

using namespace std;

//create function
   int getMin(int num[], int n){
        int min= INT_MAX;
        for(int i =0; i<n; i++){
            if(num[i] < min){
                min = num[i];
            }
        }
        //return max value
        return  min;
    }

//max or min value find krna  function bnaya
    int getMax(int num[], int n){
         int max= INT_MIN;
        
        for(int i =0;i<n; i++){
            if(num[i]>max){
                max=num[i];
            }
        }
        //return max value
        return  max;
    }



int main(){
//phli cheez hamein array bnana hai  hamein size pta hona chahiye
    int size;
    cin>>size;   //jitne size ka array lena hai woh

    int num[100];
    //input lena hai for loop lelya
  //taking input in array
    for(int i=0; i<size; i++){
    cin>>num[i];
    }

    cout<<"maximun value is:"<<getMax(num, size)<<endl;
     ///array bheja or size get max me

    cout<<"minimum value is:"<<getMin(num,size )<<endl;


    return 0;
}