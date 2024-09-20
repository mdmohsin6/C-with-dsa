#include<iostream>
using namespace std;

void reachHome(int start, int end){

    //print for start end process
    cout<<"start "<<start<<" Ending "<<end<<endl;
    //base case
    if(start == end){
        cout<<"done!!!"<<endl;

        //back
        return;
    }

    //processing call
    start++;

    //recursive call
    reachHome(start,end);
}

int main(){
      int end= 10;
    int start= 1;
  
    cout<<endl;

    reachHome(start, end);
    return 0;
}