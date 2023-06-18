//find maximum and minimum in an array using minimum number of comparisons  

#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

struct Pair 
{
    int max;
    int min;
};

Pair getMaxMin(int arr[], int n )
{
     Pair minmax;

    sort(arr, arr+n);

    minmax.min = arr [0];
    minmax.max = arr[n-1];

    return minmax;
}

int main(){
    int arr[] = {10,11,5,67,90};
    int size = sizeof(arr)/sizeof(arr[0]);

    Pair minmax = getMaxMin(arr, size);
    cout<<minmax.max<<endl;
    cout<<minmax.min<<endl;
    return 0;

}
