#include<bits/stdc++.h>
using namespace std;


bool isSorted(int arr[]){
    for(int i =1;i<n; i++){
        if(arr[i]<arr[i-1]){
            return false;
        }else
    }
    return true;
}


int main(){
    int arr[] = {1,2,3,4,5};
    cout<<isSorted(arr);
}