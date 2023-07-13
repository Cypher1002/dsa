// Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array.

// Example 1:
// Input Format: N = 5, array[] = {1,2,4,5}
// Result: 3
// Explanation: In the given array, number 3 is missing. So, 3 is the answer.


//using linear search
int solve(vector<int> &ar, int N){
     for(int i =0 ; i, N ;i++){
         for(int j =0 ; j<N;j++){
             if(ar[j] = i){
                 flag =1;
                 break; 
             }
             if(flag ==0 )
             return i;
         }
     }
}


most easy approach jo samjah aayi

using hash 
int solve(vector<int> &ar , int N){
    int hash[N+1] = {0};

    //for frequency stpre
    for(int i =0 ; i<N ; i++){
        hash[ar[i]]++;
    }

    //check nums present or not 
    for(int i =0 ; i< n; i++){
        if(hash[i]==0 )
        return i;
    }

    return -1;
}


// We will first run a loop(say i) from 0 to N-2(as the length of the array = N-1).
// Inside the loop, xor2 variable will calculate the XOR of array elements
// i.e. xor2 = xor2 ^ a[i].
// And the xor1 variable will calculate the XOR of 1 to N-1 i.e. xor1 = xor1 ^ (i+1).
// After the loop ends we will XOR xor1 and N to get the total XOR of 1 to N.
// Finally, the answer will be the XOR of xor1 and xor2.

// Assume the given array is: {1, 2, 4, 5} and N = 5.
// XOR of (1 to 5) i.e. xor1 = (1^2^3^4^5)
// XOR of array elements i.e. xor2 = (1^2^4^5)
// XOR of xor1 and xor2 = (1^2^3^4^5) ^ (1^2^4^5)
// 			= (1^1)^(2^2)^(3)^(4^4)^(5^5)
// 			= 0^0^3^0^0 = 0^3 = 3.
// The missing number is 3.
//by xor method verry useful padj=ho isko
 int missingNumber(vector<int>& nums) {
    int xor1 =0 ; int xor2 = 0;

    for(int i =0 ;i< nums.size() ;i++){
        xor1 = xor1^i;
        xor2 = xor2^nums[i];
    }
    xor1 = xor1^nums.size();
    xor1 = xor1^xor2;
    return xor1;
    }


int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}