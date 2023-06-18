#include<iostream>
#include<stdio.h>
using namespace std;

void reachHome(int src,int dest){

     cout<<"src:"<<src<<"dest"<<dest<<endl;
  //base case 
  if(src==dest){ 
  cout<<"resached"<<endl;
  return;
 }
   src++;
reachHome(src, dest);
 }

// climbStairsQues(int stair){
//     //basecase
//     if( stair < 0) return 0;
//     if(stair ==0) return 1;

//     //recursive call
//     int ans = climbStairsQues(stair -1)+ climbStairsQues(stair-2);

//     return ans;
// }


int main(){

   int dest =10;
   int src = 1;

   reachHome(src,dest);
    return 0;
}

 