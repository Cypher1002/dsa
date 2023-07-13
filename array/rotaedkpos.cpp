class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int n = nums.size();
        k=k%n;
        if (k > n){
        return;
	   }
        if(n==0 || k==0 || n==k){
	       return;
	   }
       int temp[k];
	   for(int i=0;i<k;i++){
	       temp[i]=nums[n-i-1];
	   }
	   for(int i=n-1;i>=0;i--){
			 if(i<k){
				 nums[i]=temp[k-i-1];
			 }
			 else{
				 nums[i]=nums[i-k];
			 }
	   }
    }
    }
};

<!-- DRY RUN

eg: [1,2,3,4,5,6,7]  ; k=3
j=4 (n-k) 

temp=[5,6,7]

i=6;

[1,2,3,4,5,6,7]  

nums[6]=nums[3]---->[1,2,3,4,5,6,4]
nums[5]=nums[2]---->[1,2,3,4,5,3,4]
nums[4]=nums[1]---->[1,2,3,4,2,3,4]
nums[3]=nums[0]---->[1,2,3,1,2,3,4]


i=2;   

nums[0]=temp[0]---->[5,2,3,1,2,3,4]  
nums[1]=temp[1]---->[5,6,3,1,2,3,4] 
nums[2]=temp[2]---->[5,6,7,1,2,3,4] 