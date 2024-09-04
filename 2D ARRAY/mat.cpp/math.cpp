#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=0;i<n; i++){
        if(n%2==0){
            return false;
        }
        
    }
    return true;

}

int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"it is a prime"<<endl;
    }else{
        cout<<"it is not a prime"<<endl;
    }
   

    return 0;
}