#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//sorting approach

int sortArr(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

///by maintaining a max varianble
int sort(vector<int> &arr){
    int max = arr[0];
    for(int i =0 ;i<arr.size(); i++){
        if(max<arr[i]);
        max = arr[i];
    }
    return max;
}


//sorting approach second largest elemnet ina array;
int secondLargest(vector<int>&arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size()-2];
}

//loop approach 
int secondLatrgest(vector<int>&arr){
    int max =  arr[0];
    for(int i =0;i<arr.size();i++){
        if(max<arr[i]);
        max= arr[i];
        max 
    }

    if(arr[i]>secon_large && arr[i]!= large){
        return seconfd large;
    }
}
 

int main(){
      vector<int> arr1 = {2,5,1,3,0};
       cout<<"The Largest element in the array is: "<<sortArr(arr1)<<endl;
}