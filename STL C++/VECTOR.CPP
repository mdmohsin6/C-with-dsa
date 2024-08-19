#include<iostream>

#include<vector>

using namespace std;
int main(){

    vector<int> v;
    cout<<"capacity"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"size"<<v.size()<<endl;
    v.clear();

    // sare element ko ek se initialize krna hoto 

    vector<int> a(5,1);

    cout<<"print "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    
    return 0;
}