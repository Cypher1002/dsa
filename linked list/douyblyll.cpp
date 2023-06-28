#include<stdio.h>
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

//constructor
 Node(int d){
     this->data = d;
     this->next = NULL;
     this->prev = NULL;
 }

};


//traverse a linked list 
void print(Node* head){
    Node*  temp = head;
    while(temp!=NULL){
       cout<<temp->data;
       temp =temp->next; 
    }
    cout<<endl;
}
//gives length of linked list 
void GetLength(Node* head){
    int len = 0 ;
    Node*  temp = head;

    while(temp !=NULL){
        len++;
        temp = temp->next;

    }
    return len;
}

void InsertAtBegin(Node* &head, int d){

    if(head==NULL){
      Node* temp =new Node(d);
      head =temp;
    }else{
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }

}

void InsertAtTail(Node* &tail , int d){
    Node* temp = new Node(d);
     tail->next = temp;
     temp->prev= tail;
     tail= temp;

}


void InsertAtPosition(Node* &head, Node* &tail, int d){
    Node
}

int main(){
    Node* node1 = new Node(10);
   Node*  head = node1;
    print(head);

   
    return 0;

}