#include<iostream>
using namespace std;


int binarySearch(int arr[], int size, int key){

    int start=0;
    int end=size-1;

    // int mid=(start+end)/2;
    int mid= start + (end-start)/2;
    while(start <=end){
        if(arr[mid] == key){
            return mid;
        }

        // go to right wala part
        if(key >arr[mid]){
            start= mid +1;
        }
        else{  // key < arr[mid]   chote wwale part p chale jaoo
            end=mid -1;
        }
        // mid =  (start+end)/2;
            mid= start + (end-start)/2;
    }
    return -1;
}
int main(){

    int even[6]= {2,4,6,8,12,14};
    int odd[5]={ 3,8,11,14,16};

    int Evenindex= binarySearch(even,6,12);
    cout << "index of 12 is " << Evenindex << endl;

      int Oddindex= binarySearch(odd,5,11);
      cout<<"index of 8 is "<<Oddindex<<endl;
    return 0;
}