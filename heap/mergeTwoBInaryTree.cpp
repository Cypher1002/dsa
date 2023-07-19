#include<bits/stdc++.h>
usinh namespace std;


void  heapify(int arr[], int l , int n ){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;
    if(left<n && arr[largest]<arr[left]){
        largest =  left;
    }
    if(right<n&&arr[largest]<arr[right]){
        largest= right;
    }
    if(i!= largest){
        swap(arr[largest], arr[i]);
        heapify(arr, n,largest)
    }

}

2vector<int>mergeHeapd(vector<int>&a,vector<int>&b, int n, int m){
    vector<int> ans;
    for(autoi:a){
        ans.push_back(i);

    }
    for(autoi:b){
        ans.push_back(i);
    }
    for(int i =n/2;i>0; i--){
        heapify(ans,n, i);
    }
    return ans;
    
}