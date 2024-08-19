#include<iostream>
#include<map>
using namespace std;


int main(){
    map<int, string> m;

    m[1]="md";  //sorted
    m[2]="mohsin";
    m[44]="khan";

    //2nd tareeka insert ka
        m.insert( {5, "bheem"});
    for(auto i:m){
        cout<<i.first<<" " <<i.second<<endl;
    }

    cout<<"finding 44 "<< m.count(44)<<endl;
    cout<<"finding 31 "<< m.count(31)<<endl;


    return 0;
}