#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    queue<int>q1;
    q1.push(90);
    q1.push(45);
    q1.push(78);
   cout<<q1.front();
    q1.pop();
    cout<<q1.front();

    return 0;

}