#include<iostream>
using namespace std;

int main(){
// int arr[6]={2,5,7,39};
// cout<<"adddresss of first memory block is"<<arr<<endl;
// cout<<"adddresss of first memory block is"<<&arr[0]<<endl;
// cout<<"4th value at 0 index-: "<<*arr<<endl;
// cout<<"increment "<<*arr+1<<endl;
// cout<<"6th "<<*(arr+1)<<endl;

//
// int i=3;
// cout<<i[arr]<<endl;

// int temp[10];
// cout<<sizeof(temp)<<endl;
// int *ptr=&temp[0];
// cout<<sizeof(ptr)<<endl;
// cout<<sizeof(*ptr)<<endl;
// cout<<sizeof(&ptr)<<endl;

// int a[10]={3,5,1};
// cout<<&a[0]<<endl;
// cout<<&a<<endl;
// cout<<a<<endl;


//BOTH ADDRESS ARE DIFF
// int *p= &a[0];
// cout<<"-   "<<&p<<endl;
// cout<<&a[0]<<endl;

int arr[10];

//ERROR
// arr=arr+1;

int *ptr= &arr[0];
cout<<ptr<<endl;
ptr=ptr+1;
cout<<ptr<<endl;




    return 0;
}