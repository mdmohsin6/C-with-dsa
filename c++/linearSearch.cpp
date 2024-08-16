#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){


//search karlo one by one traverse
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;

}

int main(){

int arr[10]= {4,2,7,-1,7,3,8,5,33,88};
//whether 2 is present or not??
cout <<"Enter the element to search for"<<endl;
int key;   //variable bna lya
cin>>key; //input lellyaaa
//setp 2 function bna dya bool upr

//function bnaya seach
bool found = search(arr,10,key);
if ( found){
    cout<<"key is present "<<endl;
} else{
    cout<<"key is absent"<<endl;
}


    return 0;
}