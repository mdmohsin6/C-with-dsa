#include <iostream>  
using namespace std;  
  
int main()  
{  
    int* jaggedArray[3]; // declare a jagged array containing 3 rows  
  
    // allocate memory for the rows and assign their addresses to jaggedArray  
jaggedArray[0] = new int[2] {1, 2};  
jaggedArray[1] = new int[3] {3, 4, 5};  
jaggedArray[2] = new int[4] {6, 7, 8, 9};  
  
    // print the elements of the jagged array  
for(int i = 0; i< 3; i++) {  
for(int j = 0; j < i+2; j++) {  
cout<<jaggedArray[i][j] << " ";  
        }  
cout<<endl;  
    }  
  
    // deallocate memory for the rows  
for(int i = 0; i< 3; i++) {  
delete[] jaggedArray[i];  
    }  
  
    return 0;  
}  