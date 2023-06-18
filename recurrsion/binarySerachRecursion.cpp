#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool BinarySearch(int arr[], int s, int e,int key ){
    if(s>e)
        return false;
    int mid = s+(e-s)/2;

     if(arr[mid]==key){
         return true;
     }
   
    if(arr[mid]<key){
        return BinarySearch(arr, mid+1,e,key);
    } 
    else{
        return BinarySearch(arr, s,mid-1,key);
    }

}

int main(){
  int arr[] = {12,34,56,78,90,99};
  int size = 6;
   int key = 96;
  cout<<"present or not  "<<BinarySearch(arr,0, 5, key);
    return 0;
}