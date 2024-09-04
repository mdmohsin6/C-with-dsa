#include<iostream>
#include<limits.h>

using namespace std;


int getMax(int num[], int n)
{
    //int max=INT_MIN;
    int maxi=INT_MIN;
//PRE BUILD FUNCTION
    for(int i=0;i<n;i++){
        // if(num[i]>max){
        //     max=num[i];
        // }
        maxi=max(maxi, num[i]);
    }
    // return max;
    return maxi;
}

int getMin(int num[], int n){
    //int min=INT_MAX;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        // if(num[i]<min){
        //     min=num[i];
        // }
        mini=min(mini, num[i]);
    }
    //return min;
    return mini;
}

int main(){
    int size;
    cin>>size;
    int num[100];
    //taking input in array
    for(int i=0; i<size;i++){
        cin>>num[i];
    }
    //ARRAY KO FUNCTION ME PASS

cout<<"maximum is: "<<getMax(num,size)<<endl;
cout<<"manimum is: "<<getMin(num,size)<<endl;

    return 0;
}