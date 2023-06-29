


//approach 1 (iterative way)
Node* reversell(Node* head){

    NOde* current =head ;
    Node* prev = NULL;
    Node* forward = NULL;

    while(current!=NULL){
        current->next = prev ;
        forward = current->next;
        prev = current;
        current = forward;

    }

}