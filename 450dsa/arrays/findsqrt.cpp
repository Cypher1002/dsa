int floorsqrt(int n){
    int lo =1 ;
    int hi = n-1;
    while(lo<=hi){
        int mid =  (lo+hi)/2;
       int val = mid*mid;
       if(val<= n )
         lo =  mid +1;
         else 
          hi = mid +1;


    }


          return hi;
}