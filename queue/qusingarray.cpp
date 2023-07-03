#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Queue{
int* arr;
int front;
int rear;
int size;

//constructor
public:
Queue(){
  size = 100001;
  arr =  new int[size];
  front = 0;
  rear= 0;

}

void push(int data){
    if(rear==size)
    cout<<"queue is full"<<endl;
    else{
        arr[rear] = data;
        rear++;
    }


}

int pop(){
    //queue is empty condition
    if(front == rear){
    return -1;
    }
    else{
        int ans1 =  arr[front];
        arr[front]= -1;
        front++;
        if(front == rear){
            front =0;
            rear = 0;

        }
        return ans1;
    }
}

int samne(){
    if(front == rear)
      return -1;
    else{
        return arr[front];

    }
}

bool isEmpty(){
    if(front == rear){
        return true;
    }
    else{
        return false;
    }
}


};







int main(){
   Queue q();
   q.push(20);
   

}