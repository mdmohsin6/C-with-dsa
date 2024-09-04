#include<iostream>
using namespace std;

int main(){

int num=5;
// int *p=&num;
cout<<"before "<<num<<endl;
// (*p)++;
cout<<"after "<<num<<endl;

//copy pointer
// int *q=p;
// cout<<p<<" - "<<q<<endl;
// cout<<*p<<" - "<<*q<<endl;

//important concept

// int i=3;
// int *t=&i;
// cout<< (*t)++ <<endl;
// *t=*t +1;
// cout<<*t<<endl;
// cout<<"before t"<<t<<endl;
// t=t+1;
// cout<<"after t"<<t<<endl;

//integer pointer

int i=3;
int *p;
p=&i;
cout<<"address of i "<<p<<endl;
cout<<"adress of p is "<<&p<<endl;


    return 0;
}