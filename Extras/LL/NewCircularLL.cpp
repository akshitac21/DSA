#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void create(Node* &node, int data){
    if(node != NULL){
        return;
    }

    Node* tail = new Node(data);
    node = tail;
    node->next = node;
}

void insertBegin(Node* &tail, int data){

    if(tail == NULL){
        create(tail,data);
        return;
    }
    
    Node* node = new Node(data);
    node->next = tail->next;
    tail->next = node;

}

void print(Node* tail){

    if(tail == NULL){
        cout<<"list is empty "<<endl;
        return;
    }

    Node* it = tail;
    do{
        tail = tail->next;
        cout<<tail->data<<" -> ";
    }while(tail != it);
    cout<<endl;
}

int main(){

    Node* tail = NULL;
    //create(tail,1);

    insertBegin(tail,5);
    insertBegin(tail,6);
    insertBegin(tail,7);
    insertBegin(tail,80);
    insertBegin(tail,99);
    print(tail);
}
