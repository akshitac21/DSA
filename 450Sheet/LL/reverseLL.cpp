#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{ //same as class
    int data;
    struct Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

struct LinkedList {
    Node* head; //this will be private in case of class
    
    LinkedList(){ //public
        head = NULL;
    }

    void reverse(){

        Node* current = head;
        Node* prev = NULL;
        Node* next = NULL;

        while(current != NULL){

            next = current->next;
            current->next = prev;

            prev = current;
            current = next;
        }

        head = prev;
    }

    void print(){
        struct Node* temp = head;
        while(temp){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
    }

    void push(int data){
        Node* temp = new Node(data);
        temp -> next = head;
        head = temp;
    }
};

int main(){

    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);

    cout<<"Print: \n";
    ll.print();

    ll.reverse();
    cout<<"\nReverse: \n";
    ll.print();   

    return 0;

}
