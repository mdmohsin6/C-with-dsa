#include<iostream>
using namespace std;

//create 2d array dynamically
//input output
//memory free kese krana hai

int main(){
int rows;
cin>>rows;
int cols;
cin>>cols;     
//n ki jgh rowa dal do
int** arr=new int*[rows];
for(int i=0;i<rows;i++){
    arr[i]= new int[cols];
}

//taking inout
for(int i=0; i<rows; i++){
    for(int j=0; j<cols;j++){
        cin>>arr[i][j];
    }
}

//taking output
cout<<endl;
for(int i=0; i<rows; i++){
    for(int j=0; j<cols;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
}

//RELEASE MEMORY

//putput 3 3
//1 2 3 4 5 6 7 8 9

for(int i=0;i<rows;i++){
    delete []arr[i];
}
delete []arr;

    return 0;
}


//3 rows
//4 cols
