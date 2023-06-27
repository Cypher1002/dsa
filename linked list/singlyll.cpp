#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
   int data;
   Node* next ;

   //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }


};

void insertAtTail(Node* &tail,int d){
   Node* temp = new Node(d);
   tail->next = temp;
   tail = tail->next;


}

void insertAtHead(Node* &head, int d){
//new node cerate
 Node* temp = new Node(d);
 temp->next = head;
 head = temp;

}


//traverse a linked list
void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
       cout<<temp->data<<" ";
       cout<<temp->next;
    }

    cout<<endl;


}


int main(){
    Node* node1  = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;


 //head pointed to node 1
  Node* head= node1;
  Node* tail = node1;

  print(head);

  insertAtHead(head, 12);
print(head);
insertAtTail(tail, 23);
print(head);
return 0;
}

// class Node{
//     public:
//     int data;
//     Node* next;


//     //constructor
//     Node(int data){
//         this->data= data;
//         this->next= NULL;
//     }

// };

// void insertatStart(Node* &head,int d){
//     Node* temp = new Node(d);
//     temp->next = head;
//     head = temp;

// }


// //traversing a linkedlist
// void traverse(Node* &head ){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" "<<endl;
//         cout<<temp->next<<" ";


//     }
// }




// int main(){
//     Node*  node1 = new Node(2);
// }