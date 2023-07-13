Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Input: nums = [3,2,3]
Output: 3

#include<bits/stdc++.h>

int solve(vector<int> &nums){
    //way 1 loops
    for(int i =0;i<nums.size(); i++){
        int count =0;
        for(int j =i ; j<nums.size(); j++ ){
            if(nums[i]==nums[j]){
                count++;
            }
        }
    }
    if(count >= nums.size()/2){
        return v[i];
    }
    return -1;
}

///by hash table

inrt solve(vector <int> &nums , int n ){
    map<int int> mpp;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }

    for(auto it : mpp){
        if(it.second>nums.size/2){
            return it.first;
        }
    }
    return -1;
}




int main(){
    
}