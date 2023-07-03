#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data; //-> used to access the member variables
            this->next = NULL;
        }
};

void InsertAtHead(Node* &head, int d) {
        Node *newNode = new Node(d);
        newNode->next = head; //set the next of the new node to the head
        head = newNode;
}

void InsertAtTail(Node* &tail, int d) {
    Node* newNode = new Node(d); //create a new node
    tail -> next = newNode; //set the next of the new node to the tail
    tail = newNode; //set the tail to the new node
}

void InsertAtPosition(Node* &head, int data, int position){
    if(position == 1){
        InsertAtHead(head,data);
    }

    Node* traverse = head; 
    for(int i=1; i<position-1; i++){
        traverse = traverse->next;
    }

    Node* node = new Node(data);

    node->next = traverse->next;
    traverse->next = node;
}

Node* reverse(Node* &head){
    Node* current = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(current){
        
        next = current->next;
        current->next = prev;

        prev = current;
        current = next;
    }

    return head;
}

void print(Node* &node){

    Node* temp = node;

    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }

}

int main(){
    
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    InsertAtHead(head,12);
    InsertAtHead(head,15);
    InsertAtTail(tail,28);
    InsertAtTail(tail,25);

    InsertAtPosition(head,89,2);
    print(head);

    cout<<"\n";
    Node* rev = reverse(head);
    print(rev);

}
