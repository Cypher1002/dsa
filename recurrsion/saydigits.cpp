#include<iostream>
#include<stdio.h>
using namespace std;
void printName(int n, string arr[]){
    //base case 
    if(n ==0)
    return ;

    //processing
     int digit = n%10;
     n = n/10;

     printName(n,arr);

        cout<<arr[digit]<<" ";

}
int mani(){

    string arr[10]= {"zero","one", "two","three","four","five","six",
    "seven","eight","nine"};
  int n;
  cin>>n;

printName(n, arr);
    return 0;
}