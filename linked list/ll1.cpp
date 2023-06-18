#include<iostream>
#include<bits/stdc++.h>

using namespace std;


//linked list node creation
class  Node{
    public:
    int data;
     Node* next;


//constructor
   Node(int data){
       this->data = data;
       this->next = NULL;

   }

};


int main(){
   Node* node1 = new Node(10); // node classobject of
   cout<<node1 ->data<<endl;
   cout<<node1->next<<endl;


    return 0;
}