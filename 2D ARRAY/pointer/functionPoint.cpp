#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    *p=*p+1;
}
int main(){

    //passing pointer

int value=5;
int *p= &value;
cout<<"before "<<*p<<endl;
update(p);

cout<<"after "<<*p<<endl;

//print(p);

    return 0;
}