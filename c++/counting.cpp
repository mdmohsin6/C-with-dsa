#include<iostream>
using namespace std;

//function signature
void printCounting(int num){

    // cout<<n<<endl;
    //function body;
    for(int i=1; i<=num; i++){
        cout<<i << " ";
    }
    cout<<endl;
}

int main(){

    int n;
    cin>>n;
    //call function
    printCounting(n);
    return 0;
}