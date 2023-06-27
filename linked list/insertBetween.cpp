#include<iostream>
#include<bits/stdc++.h>
using namespace std;


 class Node{
     public:
     int data;
      Node* next;

      //constructor
      Node(int data){
          this->data= data;
          this->next=NULL;
      }
 };

 void print(Node* &head){
     Node*  temp = head;
     while(head!=NULL){
         cout<<temp->data<<" ";
         cout<<temp->next<<" ";
     }

 }

 

 int main(){
 Node* newNode = new Node(20);
 Node*  head = newNode;
 Node* tail = newNode;

 

 }
