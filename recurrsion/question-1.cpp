#include<iostream>
#include<stdio.h>
using namespace std;


bool search(int arr[], int size, int key){
   //base case
    if(size==0)
    return false;
    

    if(arr[0] == key)
    return true;
    else{
        bool remainingpart = search(arr+1, size-1, key);
        retrun remainingpart;
    }
}


int main(){
 int arr[] = {2,4,5,8,9};
 int size = 5;
 int key =8;
 bool ans =  isSorted(arr, size,key);

 if(ans){
   cout<<"present"<<endl;
 }else{
     cout<<" not present"<<endl;
 }
    return 0;
}