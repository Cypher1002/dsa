#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std ;

void sortSttack(stack<int> &stack){
//base case

if(stack.empty()){
    return;
}
int num = stack.top();
stack.pop();

//recursive call
sortSttack(stack);
sortedInsert(stack,num);
}

void sortedInsert(stack<int> &stack, int num){
  if(stack.empty()||(!stack.empty() && stack.top()<num) ){
      stack.push(num);
      return;
  }

  int n = stack.top();
  stack.pop();


  //recursive call
  sortedInsert(stack, num);
  stack.push(num);

}

