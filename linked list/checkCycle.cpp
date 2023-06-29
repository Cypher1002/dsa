bool cycle(Node* head){
    if(head==NULL){
        return false;
    }

    Node* fast = head;
    Node* slow = head;

    while(fast!=NULL||FAST->NEXT!=NULL){

        fast = fast->next->next;
        slow = slow->next;
        if(slow==fast){
            return true;
        }

        return false;
    }
}