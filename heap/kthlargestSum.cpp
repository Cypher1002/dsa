kth largest sum subarray

i/p = [1,2,3,4,5,67,9]
o/p = kth largest subarray sum 


//o(nlog(n)) timecomplexity
int solve(vector<int> &arr, int k ){
    vector<int> sumStore;
    for(int i=0 ; i<=arr.size();i++){
       int  sum = 0;
        for(int j=i;i<arr.size(); j++){
                sum += arr[j];
                sumStore.push_back(sum);
        }
    }

    sort(sumStore.begin(), sumStore.end());

    return umStore[sumStore.size()-k];
}


priority_queue<int, vector<int> , greater<int>>mini;
  for(int i=0 ; i<=arr.size();i++){
       int  sum = 0;
        for(int j=i;i<arr.size(); j++){
            sum += arr[j];
            if(mini.size()<k ){mini.push(sum);}
            else{
                if(sum>mini.top()){
                    mini.pop();
                    mini.push(sum);
                }
            }
        }\
        return mini.top();
  } 