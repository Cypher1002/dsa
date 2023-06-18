#include<iostream>
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
   
    return 0;

}

/*permutation of abc = abc bac acb bca cab cba
1st call a at 1st pos - swap with itself
2nd call b swap with a 
3rd call c swap with a64lthen internal recursion for b&c swap*/



// private:
//  void slove(vector<int> nums, vector<vector<int>> & ans , int index){
//      //base case 
//       id(index>= nums.size(){
//           ans.push_back(nums);
//           return ;

//       };
//       for(int j =0 ; j<=nums.size;j++){
//           swap(nums[index], nums[j]);
//           solve(nums, ans, index+1); 
//           //backtracking
//            swap(nums[index], nums[j]);
//       }
//  }


// public : 
// vector<vector<int>>permute(vector<int> & nums){
//     vector<vector<int>> ans;
//      int index = 0 ;
//       solve(nums, ans, index);

// }

//backtarking use kari because wapis se abc bane jab uor jaye and consistency bani  rahe abc phir agli bar index 3rd pos p jaye to  a se swap ho 