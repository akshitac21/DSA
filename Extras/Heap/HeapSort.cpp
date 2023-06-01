#include <iostream>
#include <queue>
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
    int largest = i;
    int left = 2*i+1;
    int right = 2*i +2;

    if(left < n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right < n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}


void heapsort(int arr[], int n){

    for (int i = n/2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    

    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main(){
    heap h;

    int arr[5] = {70,60,55,45,50};
    int n = 5;
    
    //heapSort
    heapsort(arr,n); 
    cout<<"Printing the Heap Sort array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    priority_queue<int ,vector<int>, greater<int>> minpq;
    minpq.push(4);
    minpq.push(2);
    minpq.push(5);
    minpq.push(3);

    while (!minpq.empty()) {
    cout << minpq.top() << " ";
    minpq.pop();
    }


    //h.print();
}
