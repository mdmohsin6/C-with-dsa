#include<iostream>
using namespace std;
#include<array>



int main(){
    int basic[4]={3,6,1,9};
    array<int,4> a={3,6,1,9};

    int size=a.size();

    for(int i=0; i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"element at 2nd index " <<a.at(2)<<endl;
    cout<<" empty"<<a.empty()<<endl;
    cout<<"first element"<<a.front()<<endl;
    cout<<"back element "<< a.back()<<endl;

    return 0;


}