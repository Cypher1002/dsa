//  verry imp problem 
 
//  Given an array of integers arr[] and an integer target.

// 1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

// 2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.




// For each element of the given array, we will try to search for another element such that its sum is equal to the target. If such two numbers exist, we will return the indices or “YES” accordingly.

// Approach:

// First, we will use a loop(say i) to select the indices of the array one by one.
// For every index i, we will traverse through the remaining array using another loop(say j) to find the other number such that the sum is equal to the target (i.e. arr[i] + arr[j] = target).
// Observation: In every iteration, if the inner loop starts from index 0, we will be checking the same pair of numbers multiple times. For example, in iteration 1, for i = 0, we will check for the pair arr[0] and arr[1]. Again in iteration 2, for i = 1, we will check arr[1] and arr[0]. So, to eliminate these same pairs, we will start the inner loop from i+1.

// Dry Run: Given array, nums = [2,1,3,4], target = 4

// Using the naive approach, we first select one number and then find the second one.

// For index 0, element= 2,
// Then, we iterate through indices 1 to 3 to check if target – x, i.e. 4 – 2 = 2 exists. 2 does not exist from index 1 to 3, we move to the next index.

// For index 1, element=1,
// Then, we iterate through indices 2 to 3 to find if target – x, i.e. 4 – 1 = 3 exists. 3 exists at index 2, so we store the indices 1 and 2, break the loop, and return the indices.
#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(int n,vector<int> &arr, int target){

    vector<int> sum;
    for(int i =0;i<arr.size();i++){
        for(int j =i+1 ; j<arr.size(); i++){
          if(arr[i]+arr[j]==target){
              sum.push_back(i);
              sum.push_back(j);
          }

          return sum;
             }

             return {-1,-1};    
}
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 2: [" << ans[0] << ", "
         << ans[1] << "]" << endl;
    return 0;
}