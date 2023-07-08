#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[] , int k , int n ){

    int maxi =  INT_MIN;
    for(int i =0;i<n-k+1;i++){
        int cur_sum = 0 ;
        for(int j = i;i<k;j++){
            cur_sum = cur_sum+arr[i+j];
                   }
                    maxi =  max(maxi,cur_sum );
           
    }
    
}

int main(){
    int arr[] = {1,3,5,8,6,257,899,12};
    int k =  2;
    int n  = sizeof(arr)/sizeof(arr[0]);
    cout<<maxSum(arr, k  , n);
    return 0;
}