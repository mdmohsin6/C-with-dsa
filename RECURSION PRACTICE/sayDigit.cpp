#include<iostream>
using namespace std;
void sayDigit(int n, string arr[]);

//base case
// number divide by 10
if( n == 0 )
return;

//processing
int digit= n  %10;
n= n/10;
cout<<arr[n]<<" ";

//recursive call bacha hua number call
sayDigit(n,arr);



int main(){
     string arr[10]={"one", "two", "three", "four", "five","six","sevene",
    "eight", "nine"
    };

    int n;
    cin>>n;
    cout<<endl<<endl<<endl;
   
    sayDigit(n, arr);
    cout<<endl<<endl<<endl;



    return 0;
}