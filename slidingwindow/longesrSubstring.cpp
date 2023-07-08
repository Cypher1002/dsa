// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.



#include<bits/stdc++.h>
using namespace std;

int slove(string str){
    if(str.size()==0){
        return 0;
    }
   int maxi = INT_MIN;
   for(int i =0;i<str.length();i++){
       unordered_set<int> set;
       for(int j =i; j<str.length();j++){
          if(set.find(str[j])!= set.end()){
              maxi= max(maxi, j-i);
              break;
          }
          set.insert(str[j]);
       }
       
   }
   return maxi;
}

int main(){
    string str = "abcabcbba";
    cout<<"the length of longest ;substring without repeating characters is:"<<slove(str)<<endl;
    return 0;
}