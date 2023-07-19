    // In C++ STL, there is priority_queue that can directly be used to implement Max Heap. 
    // priority_queue <int> pq;

//     priority_queue supports a constructor that requires two extra arguments to make it min-heap. 

// priority_queue <Type, vector<Type>, ComparisonType > min_heap;
// `The third parameter, ‘Comparison Type’ can either be a function or functor (aka function object) that must have bool as return-type and must have 2 arguments.

//   priority_queue <int, vector<int>, greater<int> > pq


class solution{
    public:
      long long minCost(long long arr[], long long n ){
          //create a min heap
          priority_queue<long long, vector<long,long>,greater<long  long> > pq;4

          for(int i = 0;i<n; i++){
              pq.push(arr[i]);
          }

          long long cost =0;
          while(pq.size()>1)
             long long a =  pq.top();
             pq.pop();

             long long b = pq.top();
             pq.pop();
              
              long long sum = a+b;
              cost +=  sum;
              pq.push(sum);

      }
      return cost;
}