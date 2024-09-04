#include<iostream>
#include <limits.h>
using namespace std;


//NUMBER OF COLUMN DENA ZAROORI
bool isPresent(int arr[][3], int target, int row, int col){
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){

            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}

//row wise sum
// void printSum(int arr[][3], int row, int col){
//     cout<<"printing the sum " <<endl;
//     for(int row=0;row<3;row++){
//         int sum=0;
//         for(int col=0; col<3;col++){
//             sum+= arr[row][col];
//         }
//         cout<<sum<< " ";
//     }
//     cout<<endl;
// }

//col wise sum
void printColSum(int arr[][3], int row, int col){
    cout<<"printing the sum " <<endl;
    for(int col=0;col<3;col++){
        int sum=0;
        for(int row=0; row<3;row++){
            sum+= arr[row][col];
        }
        cout<<sum<< " ";
    }
    cout<<endl;
}

//largest row sum

int largestRowSum(int arr[][3], int row, int col){
int maxi = INT_MIN;
int rowIndex = -1;

  for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0; col<3;col++){
            sum+= arr[row][col];
        }
       if(sum > maxi){
        maxi=sum;
        rowIndex= row;
       }
    }

    cout<<"maximum sum is "<< maxi << endl;
    return rowIndex;
     }

int main(){

int arr[3][3];


//taking input
for(int row=0; row<3; row++){
    for(int col=0; col<3;col++){
        cin>>arr[row][col];
    }
}

//print
for(int row=0; row<3; row++){
    for(int col=0; col<3; col++){
        cout<<arr[row][col]<< " ";
    }
    cout<< endl;
}

// cout<<" Enter the element to search " <<endl;
// int target;
// cin>>target;

// if(isPresent(arr,target,3,3)){
//     cout<<"present"<<endl;
// }else{
//     cout<<"not present"<<endl;
// }

// // printSum(arr,3,3);
// printColSum(arr,3,3);
int ansindex= largestRowSum(arr,3,3);
cout<<" max row is at index "<<ansindex<<endl;
    return 0;
}