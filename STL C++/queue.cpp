#include<iostream>

#include<queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("md");
    q.push("mohsin");
    cout<<"first element "<<q.front()<<endl;
    q.pop();
    cout<<"first element "<<q.front()<<endl;

    return 0;
}