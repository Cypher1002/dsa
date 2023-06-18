#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int partition(int arr[], int s, int e){
    int piviot = arr[s];
    int cnt =0;
    for(int i= s+1; i<=e;i++ ){
        if(arr[i]<=piviot){
            cnt++;
        }
    }
    //place piviot at right place position
    int pivotindex =  s+cnt;
    swap(arr[pivotindex],arr[s]);

    //left and right wala part sambhal lenge

    int i = s ,j =e;
    while(i<pivotindex&&j>pivotindex){
        while(arr[i]<piviot){
            i++;
        }

        while(arr[j]>piviot){
            j--;
        }

        if(i<pivotindex&&j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotindex;
}

void quickSort(int arr[], int s , int e){
  //base case 
  if(s>=e)
     return ;

     //partitoning karenge 
      int p = partition(arr, s , e);

      //left part sort krnege

      quickSort(arr, s, p-1);

      //right part soort kro

      quickSort(arr, p+1, e);
}

int main(){

    int arr[5] = {2,4,1,6,9};
    int n  =5;
   quickSort(arr, 0 , n-1);
   for(int i =0; i<n ; i++){
       cout<<arr[i]<<" ";

   }

   cout<<endl;
    return 0;
}