#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next; //pointer to a Node object
        Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next; //deallocates the memory
            next = NULL;
        }

        cout<<"Memory free for node with data"<<val<<endl;
    }
};

void insert_head(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* temp = new Node(data);
        head = temp;
        tail=temp;
    }
    else{
        Node* temp = new Node(data);
        temp->next = head; // [temp][temp->next] -> [head]
        head->prev = temp; // [temp] <- [head_prev][head][head->next]
        head = temp;
    }
}

void insert_tail(Node* &head, Node* &tail, int data){
    if(tail==NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp =  new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }

    // [temp->prev][temp][temp->next]
    // [tail->prev][tail][tail->next] -> [temp]
}

void print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<endl;
}

void insert_position(Node* &head, Node* &tail, int position, int data){
    //if at first position
    if(position==1){
        insert_head(head,tail,data);
        return;
    }

    Node* traverse = head;
    for(int i=1; i<position-1; i++){
        traverse = traverse->next;
    }

    //if temp->next is NULL, i.e insert at tail
    if(traverse->next == NULL){
        insert_tail(head,tail,data);
    }

    Node* insert = new Node(data);

    // insert->next = traverse->next;
    // traverse->next->prev = insert;
    // traverse->next = insert;
    // insert->prev = traverse;

    insert->next = traverse->next;
    insert->prev = traverse->next->prev;
    traverse->next = insert;

}

//[head->prev][head][head->next]    [tail->prev][tail][tail->next]
//[traverse->prev][traverse][traverse->next]
//[insert->prev][insert][insert->next]


int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insert_head(head,tail,10);
    insert_head(head,tail,20);
    insert_head(head,tail,40);
    
    insert_tail(head,tail,30);
    insert_tail(head,tail,50);

    insert_position(head,tail,3,99);

    cout<<"\nNode: "<<head->data;
    cout<<"\nnode->next "<<head->next->data;
    cout<<"\nnode->next->prev "<<head->next->prev->data;
    cout<<"\nnode->next->next->prev "<<head->next->next->prev->data;
    cout<<"\nnode->next->next->prev->prev "<<head->next->next->prev->prev->data;
    cout<<"\n"<<endl;
    print(head);
}
