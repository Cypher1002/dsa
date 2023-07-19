#include<iostream>
#include<stdio.h>
using namespace std;

class heap{
    public: 
     int arr[100];
     int size;


     //constructor
     heap(){
         arr[0]=-1;
         size = 0;

     }

    void insert(int val){
        //array ka size badhana usme heap k pehle node ki val jayegi
         size = size+1;
         //konsi index p hai comp ko batana
         int index = size;
         //index p value dalna
         arr[index]= val;

         while(index>1){
             int parent = index/2;

             if(arr[parent]<arr[index]){
                 swap(arr[parent], arr[index]);
                 index= parent;
             }else{
                 return;
             }

         }
    }

    void print(){
        for(int i =1;i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    

    void deletFromHeap(){
        if(size==0){
            return;
        }

      //step 1: put last element into first index
        arr[1]==arr[size];

        //remove last element
        size--;

        //take root node to its correct position
        int i =1;
        while(i<size){
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;

            if(leftIndex<size &&arr[i]<arr[leftIndex]){
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex<size&& arr[i]<arr[rightIndex]){
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }else{
                return;
            }
        }
    }


};


void heapify(int arr[],int n , int i){
        int largest =  1; //isko sahi jagah p leke jana hai
        int left = 2*i;
        int right = 2*i+1;

        if(left<n && arr[largest]<arr[left]){
            largest = left;
        } 
        if(right <n && arr[largest]< arr[right]){
            largest = right;
        }

        //check largest element updated or not 
        if(i!= largest){
            swap(arr[largest], arr[i]);
            heapify(arr, n , largest);
        }

}




int main(){
    heap h;
    h.insert(90);
    h.insert(78);
    h.insert(66);
    h.print();

    return 0;
}