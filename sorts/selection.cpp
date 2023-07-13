#include<bits/stdc++.h>
using namespace std;

void selectionsort(int arr[], int n){
      for(int i =0 ; i<=n-2; i++){
          int mini =  i;
          for(int  j =i; i<= n-1; j++){
              if(arr[j]<arr[mini]){
                  mini = j ;
              }
          }
          int temp =  arr[mini];
          arr[mini] = arr[i];
          arr[i] =  temp;
      }
}


void bubbleSort(int arr[], int n){
    for(int i = n-1 ; i>=1 ;i--){
        for(int j =0 ; i<= i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}


void insertionSort(int arr[], int n){
for(int i =0 ;i <n ; i++){
    int temp =  arr[i];
    for(int j=i-1;j<n;j--){
         if(arr[j+1]>temp){
             arr[j+1] = arr[j];
         }
         else{
             break;
         }
    }
    arr[j+1] = temp;
}

}



int main(){

    int n;
    cin>>n;
     int arr[n];
    for(int i =0;i<n;i++){
   cin>>arr[i];
    }

    selectionsort(arr, n);

    return 0;
}