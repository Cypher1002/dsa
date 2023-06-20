//question
//Move all negative numbers to beginning and positive to end with constant extra space

// Input: {-12, 11, -13, -5, 6, -7, 5, -3, -6 }
// Output: {-12 -13 -5 -7 -3 -6 11 6 5}
#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void sort(vector <int> &arr){
    sort(arr.begin(),arr.end());
}
int main(){
    vector <int> arr = {-1,2,3,-5,6,7,-8,-9};
    sort(arr);
    for(int e:arr){
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}