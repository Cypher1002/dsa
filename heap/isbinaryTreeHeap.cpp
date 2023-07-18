//check if given binary tree follows max heap or not
bool isHeap(struct node* root){
    int index =0;
     int totalCount =  countNOdes(root);

     if( isCBT(root, index, totalCount) && isMaxOrder(root)){
         return true
     }else{
         return false;
     }
}
