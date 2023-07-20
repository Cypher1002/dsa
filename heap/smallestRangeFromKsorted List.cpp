class node{
    public:
    int data;
    int row;
    int col;

    node(int d, int r , int c){
        data = d;
        row =r;
        col =c;
    }
}

class comapre{
    public:
     bool operator()(n ode* a ,node* b){
         return a->data > b->data;
     }
}

int kSorted(vector<vector<int>>&a, int k ,int n ){


    int mini =  INT_MAX , maxi = INT_MIN;

    priority_queue<node*, vector<node*>, compare > minHeapnt;

    for(int i =0;i<k;i++){
        int element = a[i]  [0];
        //max kon update krna hai
        mini = min(mini ,element)
        maxi = maxi(maxi, element);
        minHeap.push(element);


    }
    int start = mini , end = maxi;

    while(!minHeap.empty())
}