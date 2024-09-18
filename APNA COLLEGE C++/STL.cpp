#include<iostream>
#include<vector>
using namespace std;

int main(){
 //intialize empty vector
 vector<int> vec;
 cout<<vec[0];
 //wiuth vale
 vector<char> vec1={'a','b','c'};
 for(char val : vec1){
    cout<<val<<endl;
 }
//3 METHOD
//3 is size of vector
//0 is index p kya value honi chaiye
vector<int> vec(3,0);
for(int val : vec){
    cout<<val<<endl;
}

    return 0;
}