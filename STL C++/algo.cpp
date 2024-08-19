#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(4);
    v.push_back(7);
    v.push_back(9);
    cout<<"finding 6 is:-"<< binary_search(v.begin(), v.end(), 6)<<endl;

    cout<<"lower-bound"<<lower_bound(v.begin(),v.end(),6) -v.begin()<<endl;
    cout<<"upper-bound"<<lower_bound(v.begin(),v.end(),4) -v.begin()<<endl;
    int a=4;
    int b=2;
    cout<<"max is "<<max(a,b);
    cout<<endl;
    cout<<"min is "<<min(a,b);
    cout<<endl;
    swap(a,b);
    cout<<"value of a is"<<a<<endl;

    string abcd="mohsin";
    reverse(abcd.begin(), abcd.end());
    cout<<"reversed string is "<<abcd<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<< " ";
    }
    return 0;
}