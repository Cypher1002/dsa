Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    //  if(nums[0] == NULL || nums[1] == NULL)
    //   return ; 
      int n = nums.size();
      int i =-1 , j =0 ;
      while(j<n){
          if(nums[j]!=0 ){
              i++;
              swap(nums[i], nums[j]);
          }
          j++;
      }
    }
   
};