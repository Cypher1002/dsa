#include<stdio.h>
#include<stack>
#include<iostream>

using namespace std;



  
  /*
    //creatntion of stack 
    stack<int> s;
    //push operation

    s.push(10);
    s.push(90);

    //pop, operation
    s.pop();


    if(s.empty()){
        cout<<"stack is empty"<<endl;

    }else{
        cout<<"stack has "<<s.top()<<endl;
    }

    */

   class Stack{
       //data members
       public: 
       int *arr;
       int top;
       int size;

       Stack(int size){
           this->size = size;
           arr = new int[size];
           top = -1;
       }

       void push(int element){
        if(size-top>1){
            top++;
            arr[top] =element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
       }

       void pop(){
           if(top>=0){
               top--;
           }else{
               cout<<"satck underflow"<<endl;
           }

       }

       int peek(){
           if(top>=0 && top <size)
           return arr[top];
           else
            cout<<"stack underflow"<<endl;

       }

       bool isEmpty(){
           if(top ==-1)
             return true;
        else{
            return false;
        }

       }
   };


   int main(){

   Stack s(5);
   
   s.push(115);
   s.push(20);
   s.push(90);

   cout<<s.peek()<<endl;
   s.pop();
 cout<<s.peek()<<endl;
    return 0;

}