#include <iostream>
using namespace std;

class heap {
    public:
    int arr[100];
    int size = 0;

    //constructor
    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size+1;
        int index = size;
        arr[index] = val;

        //find parent
        while(index>1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    void DeleteFromHeap(){
        if(size==0){
            cout<<"Nothing to delete"<<endl;
            return;
        }

        //step 1: put last element in first index
        arr[1] = arr[size];
        //step 2: remove last element
        size--;

        //step 3: take root node to its correct position
        int i = 1;
        while(i<=size){
            int leftIndex = 2*i; //lchild
            int rightIndex = 2*i + 1; //rchild

            if(leftIndex < size && arr[i]<arr[leftIndex] && arr[leftIndex] > arr[rightIndex]){
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex] && arr[leftIndex] < arr[rightIndex]){
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else{
                return; //everything is in its place
            }
        }
    }
};

void heapify(int arr[], int n, int i){
    int smallest = i;
    int left = 2*i+1;
    int right = 2*i +2;

    if(left < n && arr[smallest] > arr[left]){
        smallest = left;
    }
    if(right < n && arr[smallest] > arr[right]){
        smallest = right;
    }

    if(smallest != i){
        swap(arr[smallest], arr[i]);
        heapify(arr, n, smallest);
    }
}

int main(){
    heap h;
    h.insert(50); //class variable.function 
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    //h.DeleteFromHeap();

    int arr[5] = {9,3,2,6,7};
    int n = 5;
    for(int i=n/2-1; i>=0; i--){ //n/2 because we do it for non leaf nodes
        heapify(arr, n, i);
    }
    cout<<"Printing the Heapify array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl; 

    cout<<endl;
    h.print();
}
