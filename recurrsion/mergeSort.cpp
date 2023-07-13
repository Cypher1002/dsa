#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void merge(int * arr, int s, int e){
      
   int mid = (s+e)/2;

   int len1 = mid-s+1;
   int len2 = e-mid;
    int *first = new int [len1];
    int *second  = new int[len2];

//first array 
    int mainarrayIndex = s;
    for(int i =0; i<len1;i++){
        first[i] = arr[mainarrayIndex++];
    }

//second array
      mainarrayIndex  = mid+1;
    for(int i =0; i<len2;i++){
        second[i] = arr[mainarrayIndex++];      
    }

    //merge 
     int index1= 0;
     int index2 = 0;
      mainarrayIndex = s ;
      while(index1<len1 && index2 <len2){
          if(first[index1] <second[index2]){arr[mainarrayIndex++] = first[index1++];
          }
          else{
              arr[mainarrayIndex++] = second[index2++]; 
          }
      }

      while(index1 <len1){
          arr[mainarrayIndex++]  =first[index1++]; 
      }

        while(index1 <len1){
          arr[mainarrayIndex++] =second[index2++]; 
      }


      delete [] first;
      delete []second;
}

void  mergeSort(int *arr, int s , int e){
  //base case
  if(s>=e){
      return ;
  }
   int mid  = (s+e)/2;
  //left part swap krna hai 
  mergeSort(arr, s, mid);
  //right part swap krna hai
  mergeSort(arr,mid-1, e);

  //merge 
  merge(arr, s, e);
}

int main(){
 int arr[5] = {2,5,8,3,90};
 int n  = 5 ; 

  mergeSort(arr, 0, n-1 );

  for(int i = 0 ; i<n ; i++){
      cout<<arr[i]<<endl;
  }
return 0;
}